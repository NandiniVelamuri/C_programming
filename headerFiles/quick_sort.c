#include "sort.h"

int partition(int a[],int low,int high){
  int p_index=(low+high)/2;
  int pivot=a[p_index];
  while(1){
    while(a[low]<pivot){
      low++;
    }
    while(a[high]>pivot){
      high--;
    }
    if(low>=high){
      return high;
    }
    else{
      SWAP(&a[low],&a[high]);
    }
  }
}


void quickSort(int a[],int low, int high){
  if(low<high){
    int mid=partition(a,low,high);
    quickSort(a,low,mid);
    quickSort(a,mid+1,high);
  }  
}


