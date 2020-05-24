#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N,M;

int main(void) {
	scanf("%d%d",&N,&M);
	vector<int> v[N+1];
	int inDegree[N+1]={0,};
	int result[N+1];
	
	for(int i=0;i<M;++i) {
		int x,y;
		scanf("%d%d",&x,&y);
		v[x].push_back(y);
		inDegree[y]++;
	}
	
	queue<int> q;
	for(int i=1;i<=N;++i) {
		if(inDegree[i] == 0) q.push(i);
	}
	
	for(int i=1;i<=N;++i) {
		int x = q.front();
		q.pop();
		result[i] = x;
		for(int j=0;j<v[x].size();++j) {
			int y =v[x][j];
			if(--inDegree[y] ==0) q.push(y);
		}
	}
	for(int i=1;i<=N;++i) {
		printf("%d ",result[i]);
	}
}
