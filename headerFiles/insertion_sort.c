#include "sort.h"

void insertionSort(int a[],int size){
	for(int i=1;i<size;i++){
		int key=i;
		for(int j=i-1;j>=0;j--){
			if(a[key]<a[j]){
				SWAP(&a[key],&a[j]);
				key=j;
			}
		}
	}
}

