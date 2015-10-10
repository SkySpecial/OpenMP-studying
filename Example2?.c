#pragma omp critical(dataupdate)
 {
   datastructure.reorganize();
 }
 ...
 #pragma omp critical(dataupdate)
 {
   datastructure.reorganize_again();
 }
