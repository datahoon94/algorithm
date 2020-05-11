#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[9];
int v[9];

void dfs(int i, int N) {	
	if(i==N) {
		for(int j=1;j<=N;++j) {
			cout << arr[j] << " ";
		}
		cout << "\n";
		return;
	}
	
	for(int j=1;j<=N;++j) {
		if(!v[j]) {
			v[j]=1;
			arr[i+1]=j;
			dfs(i+1,N);
			v[j]=0;
		}
	}
}

int main(void) {
	int N;
	scanf("%d",&N);	
	dfs(0,N);

}
