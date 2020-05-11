#include <iostream>
using namespace std;

int number = 6;
int INF = 987654321;

int a[6][6] = {
	{0,2,5,1,INF,INF},
	{2,0,3,2,INF,INF},
	{5,3,0,3,1,5},
	{1,2,3,0,1,INF},
	{INF,INF,1,1,0,2},
	{INF,INF,5,INF,2,0},	
};

int main(void) {
	for(int i=0;i<6;++i) {
		for(int j=0;j<6;++j) {
			for(int k=0;k<6;++k) {
				if(a[j][k] > a[j][i] + a[i][k]) {
					a[j][k] = a[j][i] + a[i][k];
				}
			}
		}
	}
	
	for(int i=0;i<6;++i) {
		for(int j=0;j<6;++j) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}
