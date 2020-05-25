#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int n;
	int result=1;
	scanf("%d",&n);
	int d[n+1];
	
	for(int i=0;i<n;++i) {
		scanf("%d",&d[i]);
	}
	
	sort(d,d+n);	
	
	for(int i=0;i<n;++i) {
		if(result <d[i]) break;
		result+=d[i];
	}
	cout << result << endl;
}
