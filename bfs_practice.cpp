#include <iostream>
#include <queue>
#include <vector>

using namespace std;

queue<int> q;
vector<int> v[6];

int main(void) {
	v[1].push_back(2);
	v[1].push_back(3);
	
	v[2].push_back(1);
	v[2].push_back(4);
	v[2].push_back(5);
	
	v[3].push_back(1);
	
	v[4].push_back(2);
	
	v[5].push_back(2);
	
	
	int checked[6] = {0,};
	
	checked[1] = 1;
	q.push(1);
	while(!q.empty()) {
		int vn = q.front();
		cout << vn << endl;
		q.pop();
		for(int i=0;i<v[vn].size();++i) {
			if(checked[v[vn][i]] == 0) {
				checked[v[vn][i]] = 1;
				q.push(v[vn][i]);
			}
		}	
	}

}
