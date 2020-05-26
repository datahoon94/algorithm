#include <iostream>
#define MAX 1000001
using namespace std;

int d[MAX];
int main(void) {
	d[1]=1;
	for(int i=2;i<MAX;++i) {
		for(int j=i*2;j<MAX;j+=i) {
			if(d[j]==0) d[j]=1;
		}
	}
	
	int M,N;
	scanf("%d%d",&M,&N);
	
	for(int i=M;i<=N;++i) {
		if(d[i]==0) printf("%d\n",i);
	}
	return 0;

}

