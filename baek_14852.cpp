#include <iostream>
using namespace std;

long long int arr[1000001];
long long int sum[1000001];
int main(void) {
	arr[0]=1;
	int N;
	scanf("%d",&N);
	
	for(int i=1;i<=N;++i) {
		if(i==1) arr[i]=2;
		else if(i==2) arr[i]=7;
		else {
			sum[i]=(arr[i-3]*2+sum[i-1])%1000000007;
		}
		if(i>=3) arr[i] = (arr[i-1]*2 + arr[i-2]*3+sum[i])%1000000007;
		else arr[i] = (arr[i-1]*2 + arr[i-2]*3)%1000000007;
	}
	
	cout << arr[N] << endl;
	return 0;
}
	


