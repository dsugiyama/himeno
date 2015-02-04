mpi_exes="himeno_mpi-S himeno_mpi-M"
threads_exes="himeno_threads-S himeno_threads-M"
omp_exe="himeno_omp"
ompx_exes="himeno_ompx-S himeno_ompx-M"
gsizes="S M"

sizes="1x1 1x2 2x2 2x4 4x4 4x8 8x8 8x16 15x16"
onedsizes="1 2 4 8 16 32 64 128 240"

for e in $mpi_exes; do
    echo $e
    for s in $sizes; do
        s0=${s%x*}
        s1=${s#*x}
        python aggregate.py $1 $2 -- \
        XMP_NODE_SIZE0=$s0 XMP_NODE_SIZE1=$s1 mpirun -n $(($s0 * $s1)) ./$e
    done
    echo
done

for e in $threads_exes; do
    echo $e
    for s in $sizes; do
        s0=${s%x*}
        s1=${s#*x}
        python aggregate.py $1 $2 -- \
        XMP_NODE_SIZE0=$s0 XMP_NODE_SIZE1=$s1 ./$e
    done
    echo
done

# for g in $gsizes; do
#     echo $omp_exe-$g
#     for s in $onedsizes; do
#         python aggregate.py $1 $2 -- \
#         OMP_NUM_THREADS=$s ./$omp_exe $g
#     done
#     echo
# done

for e in $ompx_exes; do
    echo $e
    for s in $onedsizes; do
        python aggregate.py $1 $2 -- \
        OMP_NUM_THREADS=$s ./$e
    done
    echo
done
