#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector< pair<int,int>> v;

bool comp(pair<int,int> a,pair<int,int> b) {
	return a.first<b.first;	
}

int main(void) {
	int T,N;
	int result=0;

	scanf("%d",&T);
	
	for(int i=0;i<T;++i) {
		int min = 100001;
		result=0;
		v.clear();
		scanf("%d",&N);
		for(int j=0;j<N;++j) {
			int f,s;
			scanf("%d%d",&f,&s);
			v.push_back(make_pair(f,s));
		}
		
		sort(v.begin(),v.end(),comp);
		
		for(int i=0;i<N;++i) {
			if(min > v[i].second) {
				min = v[i].second;
				result++;
			}
		}
		printf("%d\n",result);
	}
	return 0;
}
