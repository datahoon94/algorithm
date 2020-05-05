#include <stdio.h>

int arr[10000]={0,};

int main(void) {
	int N;
	scanf("%d",&N);
	
	for(int i=0;i<N;++i) {
		int num;
		scanf("%d",&num);
		arr[num-1]++;
	}
	
	
	for(int i=0;i<10000;++i) {
		for(int j=0;j<arr[i];++j) {
			printf("%d\n",i+1);
		}
	}
	return 0;
}

