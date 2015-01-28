mpi_exes="himeno_mpi-S himeno_mpi-M"
threads_exes="himeno_threads-S himeno_threads-M"

sizes="1x1 1x2 2x2 2x4 4x4 4x8 8x8 8x16 15x16"

scp -q $mpi_exes $threads_exes "mic0:~/tmp"

for e in $mpi_exes; do
    echo $e
    for s in $sizes; do
        s0=${s%x*}
        s1=${s#*x}
        python aggregate.py $1 -- \
        XMP_NODE_SIZE0=$s0 XMP_NODE_SIZE1=$s1 mpirun -n $(($s0 * $s1)) ./$e
    done
    echo
done

for e in $threads_exes; do
    echo $e
    for s in $sizes; do
        s0=${s%x*}
        s1=${s#*x}
        python aggregate.py $1 -- \
        XMP_NODE_SIZE0=$s0 XMP_NODE_SIZE1=$s1 ./$e
    done
    echo
done
