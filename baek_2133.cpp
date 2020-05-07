#include <iostream>
using namespace std;
int arr[31];

int main(void) {
	arr[0]=1;
	int n;
	int sum=0;
	scanf("%d",&n);
	
	for(int i=1;i<=n;++i) { 
		if(i==1) arr[i]=0;
		else if(i==2) arr[i]=3;
		else {
			if(i%2==0) {
				sum=0;
				for(int j=4;j<=i;j++) {
					sum+=arr[i-j]*2;
				}
				arr[i]=arr[i-2]*3+sum;
			}
		}
	}
	cout << arr[n] << endl;
}
