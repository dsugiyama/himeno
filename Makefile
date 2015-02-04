CC = icc
MPI_CC = mpiicc
CFLAGS = -mmic -O3 -ipo -fno-alias -std=gnu99 -openmp
XMPFLAGS = -lxmp
MPIFLAGS = -I${HOME}/omni-compiler/include -L${HOME}/omni-compiler/lib
THREADSFLAGS = -lpthread -I${HOME}/omnixmp-threads/include -L${HOME}/omnixmp-threads/lib

TARGETS = himeno_mpi-S himeno_mpi-M himeno_threads-S himeno_threads-M himeno_omp himeno_ompx-S himeno_ompx-M

all: ${TARGETS}

himeno_mpi-S: himeno_mpi.trans.c
	${MPI_CC} -o $@ himeno_mpi.trans.c ${CFLAGS} ${XMPFLAGS} ${MPIFLAGS} -DSMALL
himeno_mpi-M: himeno_mpi.trans.c
	${MPI_CC} -o $@ himeno_mpi.trans.c ${CFLAGS} ${XMPFLAGS} ${MPIFLAGS} -DMIDDLE
himeno_threads-S: himeno_threads.trans.c
	${MPI_CC} -o $@ himeno_threads.trans.c ${CFLAGS} ${XMPFLAGS} ${THREADSFLAGS} -DSMALL
himeno_threads-M: himeno_threads.trans.c
	${MPI_CC} -o $@ himeno_threads.trans.c ${CFLAGS} ${XMPFLAGS} ${THREADSFLAGS} -DMIDDLE
himeno_omp: himeno_omp.c
	${CC} -o $@ himeno_omp.c ${CFLAGS}
himeno_ompx-S: himeno_ompx.c
	${CC} -o $@ himeno_ompx.c ${CFLAGS} -DSMALL
himeno_ompx-M: himeno_ompx.c
	${CC} -o $@ himeno_ompx.c ${CFLAGS} -DMIDDLE

run: deploy
	sh run.sh ${ITER} ${MIC}

deploy:
	scp ${TARGETS} "${MIC}:~/tmp"

clean:
	rm ${TARGETS} *.o
