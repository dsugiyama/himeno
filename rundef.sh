exec_mpi() {
    echo $1
    for s in $sizes2d; do
        s0=${s%x*}
        s1=${s#*x}
        python aggregate.py $niter $mic -- \
        XMP_NODE_SIZE0=$s0 XMP_NODE_SIZE1=$s1 mpirun -n $(($s0 * $s1)) ./$1
    done
    echo
}

exec_threads() {
    echo $1
    for s in $sizes2d; do
        s0=${s%x*}
        s1=${s#*x}
        python aggregate.py $niter $mic -- \
        KMP_AFFINITY=balanced XMP_NODE_SIZE0=$s0 XMP_NODE_SIZE1=$s1 ./$1
    done
    echo
}

exec_omp() {
    echo $1
    for s in $sizes1d; do
        python aggregate.py $niter $mic -- \
        KMP_AFFINITY=balanced OMP_NUM_THREADS=$s ./$1
    done
    echo
}
