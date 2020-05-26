#include <iostream>
#define MAX 10001
using namespace std;

int d[MAX];

int main(void) {
	for(int i=1;i<MAX;++i) {
		int sum=i;
		for(int j=i;j<MAX;j=sum) {
			if(j<10) sum = sum+j;
			else if(j<100) sum+=j/10+j%10;
			else if(j<1000) sum+= j/100 + (j%100)/10 + (j%100)%10;
			else sum+=j/1000+ (j%1000)/100 + ((j%1000)%100)/10 + ((j%1000)%100)%10;
			if(d[sum]==0) d[sum]=1;
		}
	}
	

	
	for(int i=1;i<MAX;++i) {
		if(d[i]==0) printf("%d\n",i);
	}
	return 0;
}
