#include <iostream>
using namespace std;

void quicksort(int* arr,int start,int end) {
	if(start>=end) return;
	
	int pivot = start;
	int i = start+1,j=end,temp;
	
	while(i<=j) {
		while(arr[i]<=arr[pivot]) {
			i++;
		}
		while(j>=start+1 && arr[j]>=arr[pivot]) {
			j--;

		}
		if(i>j) {
			temp = arr[j];
			arr[j] = arr[pivot];
			arr[pivot] = temp;
		}
		else {
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
	}

	quicksort(arr,start,j-1);
	quicksort(arr,j+1,end);
}


int main(void) {
	int arr[10] = {9, 7, 6, 1, 3, 4, 2, 8, 10, 5};
	quicksort(arr,0,9);
	
	for(int i=0;i<10;++i) {
		printf("%d ",arr[i]);
	}
}
