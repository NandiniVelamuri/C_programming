#include <stdbool.h>
#include "sort.h"


void bubbleSort(int a[],int size){
	for(int i=0;i<size;i++){
	bool swapped=false;
		for(int j=0;j<(size-i-1);j++){
			if(a[j]>a[j+1]){
				SWAP(&a[j],&a[j+1]);
				swapped=true;
			}
		}
		if(!swapped){
			break;
		}
	}
}

