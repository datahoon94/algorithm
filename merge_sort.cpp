#include <iostream>
using namespace std;

int sorted[1024];

void merge(int* arr,int start,int middle, int end) {
	int i=start,j=middle+1;
	int k=start;
	
	while(i<=middle && j<=end) {
		if(arr[i] > arr[j]) {
			sorted[k] = arr[j];
			j++;
		}
		else {
			sorted[k] = arr[i];
			i++;
		}
		k++;
	}
	
	if(i>middle) {
		for(int l=j;l<=end;++l) {
			sorted[k] = arr[l];
			k++;
		}
	}
	else {
		for(int l=start;l<=middle;++l) {
			sorted[k] = arr[l];
			k++;
		}
	}
	
	for(int i=start;i<=end;++i) {
		arr[i] = sorted[i];
	}
	for(int i=0;i<10;++i) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void mergesort(int* arr,int start,int end) {
	if(start<end) {
		mergesort(arr,start,(start+end)/2);
		mergesort(arr,(start+end)/2+1,end);
		merge(arr,start,(start+end)/2,end);
	}
}

int main(void) {
	int arr[10] = {10,9,8,7,6,5,4,3,2,1};
	mergesort(arr,0,9);

	return 0;
}
