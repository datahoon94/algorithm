#include <iostream>
using namespace std;

int main(void) {
	int n,m;
	int result=0;
	scanf("%d%d",&n,&m);
	if(n==1) result=1;
	
	else if(n==2) {
		if(m>7) result = 4;
		else result = (m+1)/2;
	}
	
	else {
		if(m>=7) result = m-2;
		else result = min(m,4);
	}
	
	cout << result << endl;
	return 0;
	
}
