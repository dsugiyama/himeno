CC = icc
MPI_CC = mpiicc
CFLAGS = -mmic -O3 -ipo -fno-alias -std=gnu99 -openmp
XMPFLAGS = -lxmp
MPIFLAGS = -I${HOME}/omni-compiler/include -L${HOME}/omni-compiler/lib
THREADSFLAGS = -lpthread -I${HOME}/omnixmp-threads/include -L${HOME}/omnixmp-threads/lib

TARGETS = himeno_mpi-S himeno_mpi-M himeno_mpi-L \
          himeno_threads-S himeno_threads-M himeno_threads-L \
          himeno_ompx-S himeno_ompx-M himeno_ompx-L

L1DIST = 0x40
L2DIST = 0x100

all: ${TARGETS}

himeno_mpi-S: himeno_mpi.trans.c
	${MPI_CC} -o $@ himeno_mpi.trans.c ${CFLAGS} ${XMPFLAGS} ${MPIFLAGS} -DSMALL \
	-DL1DIST=${L1DIST} -DL2DIST=${L2DIST}
himeno_mpi-M: himeno_mpi.trans.c
	${MPI_CC} -o $@ himeno_mpi.trans.c ${CFLAGS} ${XMPFLAGS} ${MPIFLAGS} -DMIDDLE \
	-DL1DIST=${L1DIST} -DL2DIST=${L2DIST}
himeno_mpi-L: himeno_mpi.trans.c
	${MPI_CC} -o $@ himeno_mpi.trans.c ${CFLAGS} ${XMPFLAGS} ${MPIFLAGS} -DLARGE \
	-DL1DIST=${L1DIST} -DL2DIST=${L2DIST}
himeno_threads-S: himeno_threads.trans.c
	${MPI_CC} -o $@ himeno_threads.trans.c ${CFLAGS} ${XMPFLAGS} ${THREADSFLAGS} -DSMALL \
	-DL1DIST=${L1DIST} -DL2DIST=${L2DIST}
himeno_threads-M: himeno_threads.trans.c
	${MPI_CC} -o $@ himeno_threads.trans.c ${CFLAGS} ${XMPFLAGS} ${THREADSFLAGS} -DMIDDLE \
	-DL1DIST=${L1DIST} -DL2DIST=${L2DIST}
himeno_threads-L: himeno_threads.trans.c
	${MPI_CC} -o $@ himeno_threads.trans.c ${CFLAGS} ${XMPFLAGS} ${THREADSFLAGS} -DLARGE \
	-DL1DIST=${L1DIST} -DL2DIST=${L2DIST}
himeno_ompx-S: himeno_ompx.c
	${CC} -o $@ himeno_ompx.c ${CFLAGS} -DSMALL
himeno_ompx-M: himeno_ompx.c
	${CC} -o $@ himeno_ompx.c ${CFLAGS} -DMIDDLE
himeno_ompx-L: himeno_ompx.c
	${CC} -o $@ himeno_ompx.c ${CFLAGS} -DLARGE

run: deploy
	sh run.sh ${NITER} ${MIC}

deploy:
	scp ${TARGETS} "${MIC}:~/tmp"

clean:
	rm ${TARGETS} *.o
