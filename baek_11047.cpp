#include <iostream>
#define MAX 11
using namespace std;

int main(void) {
	int N,K;
	int coin[MAX];
	int result=0;
	scanf("%d%d",&N,&K);
	
	for(int i=0;i<10;++i) {
		scanf("%d",&coin[i]);
	}
	
	for(int i=N-1;i>=0;--i) {
		result += K/coin[i];
		K%=coin[i];
	}
	printf("%d\n",result);
	return 0;
}
