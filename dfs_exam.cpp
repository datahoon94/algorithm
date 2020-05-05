#include <iostream>
#include <stack>
#include <vector>

using namespace std;
vector<int> v[6];
int checker[6] = {false,};
stack<int> s;


void dfs_stack(int start) {
	cout << start << " ";
	checker[start]=true;
	s.push(start);
	
	while(!s.empty()) {

		int top = s.top();
		s.pop();
		
		for(int i=0;i<v[top].size();++i) {
			if(checker[ v[top][i]]==false) {
				cout <<  v[top][i] << " ";
				checker[ v[top][i]] = true;
				s.push(top);
				s.push( v[top][i]);
				break;
			}
		}
	}
	
}


void dfs(int start) {
	cout << start << " ";
	checker[start]=true;
		if(checker[v[start][i]]==false) {
			dfs(v[start][i]);
		}
	}
}


int main(void) {
	v[1].push_back(2);
	v[1].push_back(3);
	
	v[2].push_back(1);
	v[2].push_back(4);
	v[2].push_back(5);
	
	v[3].push_back(1);
	
	v[4].push_back(2);
	
	v[5].push_back(2);

	dfs_stack(1);
	cout << "\n";

	
}
