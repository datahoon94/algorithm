#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> v[6];
int visited[6];
stack<int> s;

int f_adj(int top) {
	for(int i=0;i<v[top].size();++i) {
		if(visited[v[top][i]]==false)
			return i;
	}
	return -1;
}

void dfs_stack(int start) {
	cout << start << " ";
	visited[start]=true;
	s.push(start);
	
	while(!s.empty()) {
		int top = s.top();
		int adjacent = f_adj(top);
		if(adjacent==-1) s.pop();
		else {
			cout << v[top][adjacent]<< " ";
			visited[v[top][adjacent]] = true;
			s.push(v[top][adjacent]);
		}
	}
	
}

void dfs(int n) {
	cout<< "hi" << endl;
	cout << n << " ";
	visited[n]=1;
	
	for(int i=0;i<v[n].size();++i) {
		if(!visited[v[n][i]]) {
			dfs(v[n][i]);
		}
	}
}

int main(void) {
	v[1].push_back(2);
	v[1].push_back(3);
	
	v[2].push_back(2);
	v[2].push_back(4);
	v[2].push_back(5);
	
	v[3].push_back(1);
	
	v[4].push_back(2);
	
	v[5].push_back(2);
	
	dfs(1);
}
