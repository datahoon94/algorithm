#include <iostream>
#include <vector>
using namespace std;

int number = 6;
int INF = 987654321;

vector<pair<int,int>> a[7];
int d[7];

void dijkstra(int start) {
	for(int i=0;i<v[start].size();++i) {
		int current = getSmallIndex();
		for(int j=0;j<number;++j) {
			if(!v[j]) {
				if(d[current]+a[current][j] < d[j]) {
					d[j] = d[current]+a[current][j];
				}
			}
		}
	}
}

int main(void) {
	for(int i=1;i<=number;++i) {
		d[i] = INF;
	}
	
	a[1].push_back(make_pair(2,2));
	a[1].push_back(make_pair(5,3));
	a[1].push_back(make_pair(1,4));
	
	a[2].push_back(make_pair(2,1));
	a[2].push_back(make_pair(3,3));
	a[2].push_back(make_pair(2,4));
	
	a[3].push_back(make_pair(5,1));
	a[3].push_back(make_pair(3,2));
	a[3].push_back(make_pair(3,4));
	a[3].push_back(make_pair(1,5));
	a[3].push_back(make_pair(5,6));
	
	a[4].push_back(make_pair(1,1));
	a[4].push_back(make_pair(2,2));
	a[4].push_back(make_pair(3,3));
	a[4].push_back(make_pair(1,5));
	
	a[5].push_back(make_pair(1,3));
	a[5].push_back(make_pair(1,4));
	a[5].push_back(make_pair(2,6));
	
	a[6].push_back(make_pair(5,3));
	a[6].push_back(make_pair(2,5));
	
	dijkstra(0);
	for(int i=0;i<number;++i) {
		cout << d[i] << " ";
	}
	
	return 0;
}
