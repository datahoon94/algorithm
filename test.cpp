#include <iostream>
#include <math.h>
using namespace std;

void isPrime(int i) {;
	for(int j=2;j<=(int)sqrt(i);++j) {
		if(i%j==0) return;
	}
    printf("%d ",i);
}

int main(void) {
	for(int i=1;i<=100000;++i) {
		isPrime(i);
	}
	return 0;
}
