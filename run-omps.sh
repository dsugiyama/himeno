sizes1d="1 2 4 8 16 32 60 120 240"

niter=$1
mic=$2
nfork=$3

. ./rundef.sh

exec_abt() {
    echo $1
    for s in $sizes1d; do
        python aggregate.py $niter $mic -- \
        OMP_NUM_THREADS=$s OMPC_NUM_FORK=$nfork ./$1
    done
    echo
}

exec_omp himeno_intel_collapse-M
exec_omp himeno_intel-M
exec_omp himeno_omni-M
exec_abt himeno_abt-M
