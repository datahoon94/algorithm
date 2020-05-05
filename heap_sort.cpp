#include <stdio.h>

int arr[5] = {3,2,4,1,5};

void make_maxheap(int* arr) {
	for(int i=4;i>=0;--i) {
		int node = i;
		while(node!=0) {
			int parent = (node-1)/2;
			if(arr[parent]<=arr[node]) {
				int temp = arr[parent];
				arr[parent] = arr[node];
				arr[node] = temp;
			}
			node = parent;
		}	
	}
}

void heap_sort(int* arr) {
	for(int i=4;i>0;--i) {
		int temp = arr[0];
		arr[0] = arr[i];
		arr[i] = temp;    // i번째 정렬 완료
		
		//0 ~ i-1 maxheap 만들기
		for(int j=i-1;j>=0;--j) {
			int node = j;
			while(node!=0) {
			int parent = (node-1)/2;
			if(arr[parent]<=arr[node]) {
				int temp = arr[parent];
				arr[parent] = arr[node];
				arr[node] = temp;
			}
			node = parent;
		}	
	}
		 
	}
}


int main(void) {
	make_maxheap(arr);
	
	for(int i=0;i<5;++i) {
		printf("%d ",arr[i]);
	}
	printf("\n");
	heap_sort(arr);
	for(int i=0;i<5;++i) {
		printf("%d ",arr[i]);
	}
	return 0;
}
