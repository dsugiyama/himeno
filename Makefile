CC = icc
MPI_CC = mpiicc
CFLAGS = -mmic -O3 -std=gnu99 -fno-alias -openmp
XMPFLAGS = -lxmp
MPIFLAGS = -I${HOME}/omni-compiler/include -L${HOME}/omni-compiler/lib
THREADSFLAGS = -lpthread -I${HOME}/omnixmp-threads/include -L${HOME}/omnixmp-threads/lib

TARGETS = himeno_mpi-S himeno_mpi-M himeno_threads-S himeno_threads-M himeno_omp himeno_ompx-S himeno_ompx-M

all: ${TARGETS}

himeno_mpi-S:
	${MPI_CC} -o $@ himeno_mpi.trans.c ${CFLAGS} ${XMPFLAGS} ${MPIFLAGS} -DSMALL
himeno_mpi-M:
	${MPI_CC} -o $@ himeno_mpi.trans.c ${CFLAGS} ${XMPFLAGS} ${MPIFLAGS} -DMIDDLE
himeno_threads-S:
	${MPI_CC} -o $@ himeno_threads.trans.c ${CFLAGS} ${XMPFLAGS} ${THREADSFLAGS} -DSMALL
himeno_threads-M:
	${MPI_CC} -o $@ himeno_threads.trans.c ${CFLAGS} ${XMPFLAGS} ${THREADSFLAGS} -DMIDDLE
himeno_omp:
	${CC} -o $@ himeno_omp.c ${CFLAGS}
himeno_ompx-S:
	${CC} -o $@ himeno_ompx.c ${CFLAGS} -DSMALL
himeno_ompx-M:
	${CC} -o $@ himeno_ompx.c ${CFLAGS} -DMIDDLE

clean:
	rm ${TARGETS} *.o
