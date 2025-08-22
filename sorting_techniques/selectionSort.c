#include <stdio.h>
#define SWAP(a,b) (*a)^=(*b)^=(*a)^=(*b)

void selectionSort(int a[],int size){
   for(int i=0;i<size;i++){
      for(int j=i+1;j<size;j++){
        if(a[j]<a[i]){
          SWAP(&a[i],&a[j]);
        }
      }  
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

  selectionSort(a,size);
  printf("\nSorted array: ");
  printArray(a,size);

}
