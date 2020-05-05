#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

vector<pair<string,int>> vec;

bool compare(pair<string,int> vec1, pair<string,int> vec2) {
	if(vec1.second == vec2.second) return vec1.first < vec2.first;
	return vec1.second < vec2.second;
}

int main(void) {
	int n;
	scanf("%d",&n);

	for(int i=0;i<n;++i) {
		string s; 
		cin >> s;
		vec.push_back(make_pair(s,s.length()));
	}
	
	sort(&vec[0],&vec[0]+n,compare);
	
	cout << vec[0].first << endl;
	for(int i=1;i<vec.size();++i) {
		if(vec[i]!=vec[i-1]) {
			cout << vec[i].first << endl;
		}
	}
	
	return 0;
}
