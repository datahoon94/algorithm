#include <iostream>
#define MAX 1000000
using namespace std;

int d[MAX+1];

int main(void) {
	d[1]=1;
	
	for(int i=2;i<=MAX;++i) {
		for(int j=i+i;j<=MAX;j+=i) {
			if(d[j]==0) d[j]=1;
		}
	}
	
	while(1) {
		bool prime=false;
		int input;
		scanf("%d",&input);
		if(input==0) break;
		
		for(int i=1;i<=input;++i) {
			int t = input;
			if(d[i]==0) t= input - i;
			if(d[t]==0) {
				printf("%d = %d + %d\n",input,i,t);
				prime=true;
				break;
			}
		}
		if(!prime) printf("Goldbach's conjecture is wrong.\n");
	}
	return 0;
}
