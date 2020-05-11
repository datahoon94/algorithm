#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int number = 6;
int INF = 987654321;

vector<pair<int,int>> a[7];
int d[7];

void dijkstra(int start) {
	d[start] = 0;
	priority_queue<pair<int, int>> pq;
	pq.push(make_pair(0,start));
	
	while(!pq.empty()) {

		int current = pq.top().second;
		int distance = -pq.top().first;
		
		pq.pop();
		if(d[current] < distance) continue;
		for(int i=0;i<a[current].size();++i) {
			int next = a[current][i].second;
			int nextDistance = distance + a[current][i].first;
			
			if(nextDistance < d[next]) {
				d[next] = nextDistance;
				pq.push(make_pair(-nextDistance,next));
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
	
	dijkstra(1);	
	for(int i=1;i<=number;++i) {
		cout << d[i] << " ";
	}
	for(int i=1;i<=number;++i) {
		d[i] = INF;
	}
	cout << "\n";
	
	dijkstra(2);
	for(int i=1;i<=number;++i) {
	cout << d[i] << " ";
	}
	cout << "\n";
	return 0;
}
