#include <stdio.h>
#include <time.h>
#include "timer.h"

void calcTime(void (*func)(void* args),void* args){
  clock_t start,end;
  start=clock();
  (*func)(args);
  end=clock();
  double time_taken=(double)(end-start)/CLOCKS_PER_SEC;
  printf("\nFunction executed in %.15f seconds",time_taken);
}
