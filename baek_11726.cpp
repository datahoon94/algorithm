#include <iostream>
using namespace std;
long long int arr[1001];

int main(void) {
	int n;
	scanf("%d",&n);
	
	for(int i=1;i<=n;++i) {
		if(i==1 || i==2) arr[i]=i;
		else arr[i] = (arr[i-1] + arr[i-2])%10007;
	}
	cout << arr[n] << endl;
}
