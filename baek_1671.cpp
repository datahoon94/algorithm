#include <iostream>
#include <vector>
using namespace std;

#define MAX 51

vector<int> v[MAX];
int stat[MAX][3];
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
	int N;
	int count=0;
	scanf("%d",&N);
	
	for(int i=1;i<=N;++i) {
		int a,b,c;
		scanf("%d%d%d",&stat[i][0],&stat[i][1],&stat[i][2]);
	}
	for(int i=1;i<=N-1;++i) {
		for(int j=i+1;j<=N;++j) {
			if(stat[i][0] >= stat[j][0] && stat[i][1] >= stat[j][1] && stat[i][2] >= stat[j][2]) {
				v[i].push_back(j);
			} else if(stat[i][0] <= stat[j][0] && stat[i][1] <= stat[j][1] && stat[i][2] <= stat[j][2]) {
				v[j].push_back(i);
			}
		}
	}
	for(int k=0;k<2;++k) {
		for(int i=1;i<=N;++i) {
			fill(c,c+MAX, false);
			if(dfs(i)) count++;
		}
	}
	printf("%d\n",N-count);
}
