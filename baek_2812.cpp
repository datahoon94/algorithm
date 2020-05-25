#include <iostream>
#include <string>
#include <stack>

using namespace std;

stack<char> st;
int main(void) {
	int N,K;
	string s;
	string result="";
	
	scanf("%d%d",&N,&K);
	cin >> s;
	
	st.push(s[0]);
	for(int i=1;i<N;++i) {
		while(K!=0 && !st.empty() && st.top() < s[i]) {
			st.pop();
			K--;
		}
		st.push(s[i]);
	}
	
	while(K) {
		st.pop();
		K--;
	}
	
	while(!st.empty()) {
		result.push_back(st.top());
		st.pop();
	}
	
	for(int i=result.size()-1;i>=0;--i) {
		printf("%c",result[i]);	
	}

	return 0;

}
