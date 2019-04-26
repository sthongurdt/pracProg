#!/bin/sh
# run mpi_pi.c with np from 1 to 8

mpicc mpi_pi_montecarlo.c -o pi

#mpirun -np 2 ./pi

for i in $(seq 1 8)
do
mpirun -np $i ./pi
done
