#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];

int main(void) {
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;++i) {
		int num;
		scanf("%d",&num);
		arr[i]=num;
	}
	
	sort(arr,arr+n);

	int sum=0;
	for(int i=0;i<n;++i) {
		for(int j=0;j<=i;++j) {
			sum+=arr[j];
		}
	}
	cout << sum << endl;
}
