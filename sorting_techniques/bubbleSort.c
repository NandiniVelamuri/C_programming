#include <stdio.h>
#include <stdbool.h>

void printArray(int a[],int size){
	for(int i=0;i<size;i++){
		printf("%d ",a[i]);
	}
}

void swap(int *a,int *b){
	int temp = *a;
	*a=*b;
	*b=temp;
}

void bubbleSort(int a[],int size){
	for(int i=0;i<size;i++){
	bool swapped=false;
		for(int j=0;j<(size-i-1);j++){
			if(a[j]>a[j+1]){
				swap(&a[j],&a[j+1]);
				swapped=true;
			}
		}
		if(!swapped){
			break;
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

	bubbleSort(a,size);
	printf("\nSorted Array:");
	printArray(a,size);
}
