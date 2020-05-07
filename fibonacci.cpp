#include <iostream>
using namespace std;
unsigned long long int arr[50000];


int fibonacci_dvide(int n) {

	if(n==1 || n==2) return 1;
	else return fibonacci_dvide(n-1)+ fibonacci_dvide(n-2);
}

void fibonacci_dp(int n) {
	for(int i=1;i<=n;++i) {
		if(i==1 || i==2) arr[i]=1;
		else arr[i] = arr[i-1]+arr[i-2];
	}
}

int main(void) {
	int n=50;

	fibonacci_dp(n);

	
	for(int i=1;i<=n;++i) {
		cout << arr[i] << " ";
	};
	
	return 0;
}
