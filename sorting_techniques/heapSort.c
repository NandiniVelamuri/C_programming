#include <stdio.h>
#define SWAP(a,b) (a)^=(b)^=(a)^=(b)

void heapify(int a[], int size, int root){
  int max = root;

  int left_child = (2*root)+1;
  int right_child = (2*root)+2;

  if(left_child < size && a[left_child]>a[max]){
    max = left_child;
  }

  if(right_child < size && a[right_child]>a[max]){
    max = right_child;
  }

  if(max!=root){
    SWAP(a[root],a[max]);
    heapify(a,size,max);
  }
}

void heapSort(int a[], int size){
  for(int i=(size/2)-1;i>=0 ; i--){
    heapify(a,size,i);
  }

  for(int i = size-1;i>0;i--){
    SWAP(a[0],a[i]);
    heapify(a,i,0);
  }
}



void printArray(int a[],int size){
  for(int i=0;i<size;i++){
    printf("%d ",a[i]);
  }
}



void main(){
  int size;
  printf("Enter the number of elements: ");
  scanf("%d",&size);

  int a[size];
  for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
  }
  
  printf("Original array: ");
  printArray(a,size);

  heapSort(a,size);
  printf("\nSorted array: ");
  printArray(a,size);

}
