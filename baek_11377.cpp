#include <iostream>
#include <vector>
using namespace std;

#define MAX 1001

vector<int> v[MAX];
bool c[MAX];
int d[MAX];

bool dfs(int x) {
	for(int i=0;i<v[x].size();++i) {
		int t = v[x][i];
		if(c[t]) continue;
		c[t] = true;
		if(d[t]==0 || dfs(d[t])) {
			d[t] = x;
			return true;
		}
	}
	return false;
}

int main(void) {
	int N,M,K;
	int count=0;
	scanf("%d%d%d",&N,&M,&K);
	
	for(int i=1;i<=N;++i) {
		int t;
		scanf("%d",&t);
		for(int j=1;j<=t;++j) {
			int g;
			scanf("%d",&g);
			v[i].push_back(g);
		}
	}
	
	for(int i=1;i<=N;++i) {
		fill(c,c+MAX, false);
		if(dfs(i)) count++;
	}
	
	int extra = 0;
	for(int i=1;i<=N && extra<K;++i) {
		fill(c,c+MAX,false);
		if(dfs(i)) extra++;
	}
	printf("%d\n",count+extra);
}
