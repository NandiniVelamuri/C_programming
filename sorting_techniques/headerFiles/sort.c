#include <stdio.h>
#include "sort.h"

void printArray(int a[],int size){
  printf("\n");
  for(int i=0;i<size;i++){
    printf("%d ",a[i]);
  }
}

/*Wrapper Functions*/

void timed_ComparisonSort(void* args){
  ComparisonSort* cs = (ComparisonSort*)args;
  switch(cs->mode){
      case 1: bubbleSort(cs->a,cs->size);
              break;
      case 2: selectionSort(cs->a,cs->size);
              break;
      case 3: insertionSort(cs->a,cs->size);
              break;
      case 4: heapSort(cs->a,cs->size);
              break;
      default: printf("Invalid mode!");
              break;

  }
}

void timed_DACSort(void* args){
  DACSort* dc = (DACSort*)args;
  switch(dc->mode){
      case 1: mergeSort(dc->a,dc->low,dc->high);
              break;
      case 2: quickSort(dc->a,dc->low,dc->high);
              break;
      default: printf("Invalid mode!");
              break;

  }
}



