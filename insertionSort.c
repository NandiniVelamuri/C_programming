#include <stdio.h>
 void printArray(int a[],int size){
	for(int i=0;i<size;i++){
		printf("%d ",a[i]);
	}
}

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void insertionSort(int a[],int size){
	for(int i=1;i<size;i++){
		int key=i;
		for(int j=i-1;j>=0;j--){
			if(a[key]<a[j]){
				swap(&a[key],&a[j]);
				key=j;
			}
		}
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
	printf("Array:");
	printArray(a,size);

	printf("\nSorted array:");
	insertionSort(a,size);
	printArray(a,size);
}
