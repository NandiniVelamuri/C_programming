#include <stdio.h>
void swap(int *a,int*b){
  int temp=*a;
  *a=*b;
  *b=temp;
}

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
      swap(&a[low],&a[high]);
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

void print(int a[],int size){
  for(int i=0;i<size;i++){
    printf("%d ",a[i]);
  }
}

void main(){
  int size;
  printf("Enter the size of the array: ");
  scanf("%d",&size);

  int a[size];
  for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
  }

  int low=0,high=size-1;
  quickSort(a,low,high);
  printf("Sorted array:");
  print(a,size);
}
