#include "sort.h"

void selectionSort(int a[],int size){
   for(int i=0;i<size;i++){
      for(int j=i+1;j<size;j++){
        if(a[j]<a[i]){
          SWAP(&a[i],&a[j]);
        }
      }  
    }
  }

