CC = mpiicc
CFLAGS = -mmic -O3 -std=gnu99 -fno-alias -lm -lxmp -openmp
MPIFLAGS = -I${HOME}/omni-compiler/include -L${HOME}/omni-compiler/lib
THREADSFLAGS = -lpthread -I${HOME}/omnixmp-threads/include -L${HOME}/omnixmp-threads/lib

all: himeno_mpi-S himeno_mpi-M himeno_mpi-L himeno_threads-S himeno_threads-M himeno_threads-L

himeno_mpi-S:
	${CC} -o $@ himeno_mpi.trans.c ${CFLAGS} ${MPIFLAGS} -DSMALL
himeno_mpi-M:
	${CC} -o $@ himeno_mpi.trans.c ${CFLAGS} ${MPIFLAGS} -DMIDDLE
himeno_mpi-L:
	${CC} -o $@ himeno_mpi.trans.c ${CFLAGS} ${MPIFLAGS} -DLARGE
himeno_threads-S:
	${CC} -o $@ himeno_threads.trans.c ${CFLAGS} ${THREADSFLAGS} -DSMALL
himeno_threads-M:
	${CC} -o $@ himeno_threads.trans.c ${CFLAGS} ${THREADSFLAGS} -DMIDDLE
himeno_threads-L:
	${CC} -o $@ himeno_threads.trans.c ${CFLAGS} ${THREADSFLAGS} -DLARGE

clean:
	rm himeno_mpi-S himeno_mpi-M himeno_mpi-L himeno_threads-S himeno_threads-M himeno_threads-L *.o
