#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N;

int main(void) {
	scanf("%d",&N);
	vector<int> v[N+1];
	int inDegree[N+1]={0,};
	int result[N+1]={0,};
	int time[N+1]={0,};
	
	for(int i=1;i<=N;++i) {
		scanf("%d",&time[i]);
		while(1) {
			int x;
			scanf("%d",&x);
			if(x==-1) break;
			inDegree[i]++;
			v[x].push_back(i);
		}
	}
	
	queue<int> q;
	for(int i=1;i<=N;++i) {
		if(inDegree[i] == 0) {
			result[i] = time[i];
			q.push(i);
		}
	}
	for(int i=1;i<=N;++i) {
		int x = q.front();
		q.pop();
		for(int j=0;j<v[x].size();++j) {
			int y = v[x][j];
			result[y] = max(result[y],result[x]+time[y]);
			if(--inDegree[y] ==0) q.push(y);
		}
	}
	for(int i=1;i<=N;++i) {
		printf("%d\n",result[i]);
	}
}
