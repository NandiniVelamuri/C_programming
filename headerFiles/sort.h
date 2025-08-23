#ifndef SORT_H
#define SORT_H
#define SWAP(A,B) (*A)^=(*B)^=(*A)^=(*B)
#define SIZE(A) sizeof(A)/sizeof(A[0])

typedef struct{
  int *a;
  int size;
  int mode;
}ComparisonSort;

typedef struct{
  int *a;
  int low;
  int high;
  int mode;
}DACSort;


void printArray(int a[],int size);

void bubbleSort(int a[],int size);
void insertionSort(int a[],int size);
void selectionSort(int a[],int size);
void mergeSort(int a[],int low,int high);
void quickSort(int a[],int low, int high);
void heapSort(int a[], int size);


void timed_ComparisonSort(void* args);
void timed_DACSort(void* args);

#endif 
