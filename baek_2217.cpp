#include <iostream>
#include <algorithm>

using namespace std;

bool comp(int i,int j) {
	return i>j;
}

int main(void) {
	int N;
	scanf("%d",&N);
	int rope[N+1];
	
	for(int i=0;i<N;++i) {
		scanf("%d",&rope[i]);
	}
	
	sort(rope,rope+N,comp);
	
	int w = rope[0];
	int k=2;
	
	for(int i=1;i<N;++i) {
		if(rope[i]*k > w) {
			w = rope[i]*k;
		}
		k++;
	}
	
	printf("%d\n",w);
	return 0;
}
