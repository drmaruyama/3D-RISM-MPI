#include "rism3d.h"

void RISM3D :: set_mpi () {
  MPI_Comm_size(MPI_COMM_WORLD, &procs);
  MPI_Comm_rank(MPI_COMM_WORLD, &myrank);
}
