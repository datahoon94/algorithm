#include <iostream>
using namespace std;

bool isPrime(int n) {
	if(n==1) return false;
	if(n==2) return true;
	for(int i=2;i<n;++i) {
		if(n%i==0) return false;
	}
	return true;
}

int main(void) {
	int N;
	int count=0;
	scanf("%d",&N);
	int d[N+1];
	
	for(int i=0;i<N;++i) {
		scanf("%d",&d[i]);
	}
	
	for(int i=0;i<N;++i) {
		if(isPrime(d[i])) count++;
	}
	printf("%d\n",count);
	return 0;
}
