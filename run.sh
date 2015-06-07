sizes2d="1x1 1x2 2x2 2x4 4x4 4x8 6x10 10x12 15x16"
sizes1d="1 2 4 8 16 32 60 120 240"

niter=$1
mic=$2

. ./rundef.sh

exec_mpi himeno_mpi-S
exec_threads himeno_threads-S
exec_omp himeno_ompx-S
exec_mpi himeno_mpi-M
exec_threads himeno_threads-M
exec_omp himeno_ompx-M
exec_mpi himeno_mpi-L
exec_threads himeno_threads-L
exec_omp himeno_ompx-L
