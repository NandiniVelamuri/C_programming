#include <stdio.h>
void merge(int a[],int low,int mid,int high){
	int i=0,j=0,k=low;

	int lsize=mid-low+1, rsize= high-mid;

	int left[lsize],right[rsize];
	for(int i=0;i<lsize;i++){
		left[i]=a[low+i];
	}
	for(int j=0;j<rsize;j++){
		right[i]=a[mid+i+1];
	}


	while(i<lsize && j<rsize){
		if(left[i]<=right[j]){
			a[k++]=left[i++];
	       	}
		else{
			a[k++]=right[j++];
		}
	}
	while(i<lsize){
		a[k++]=left[i++];
	}
	while(j<rsize){
		a[k++]=right[j++];
	}

}


void mergeSort(int a[],int low,int high){
	if(low<high){
		int mid=(low+high)/2;
		mergeSort(a,low,mid);
		mergeSort(a,mid+1,high);
		merge(a,low,mid,high);
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


	int low=0, high=size-1;
	mergeSort(a,low,high);
	printf("\nSorted Array: ");
	print(a,size);

}
