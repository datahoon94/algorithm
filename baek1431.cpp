#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<string,int>> vec;

bool compare(pair<string,int> v1, pair<string,int> v2) {
	if(v1.first.length() != v2.first.length()) return v1.first.length() < v2.first.length();
	else if(v1.second!=v2.second) return v1.second < v2.second;
	else return v1.first < v2.first;
}	

int main(void) {
	int n;
	int sum=0;
	scanf("%d",&n);
	
	for(int i=0;i<n;++i) {
		string s;
		cin >> s;
		sum=0;
		for(int j=0;j<s.length();++j) {
			if(s[j]>='0' && s[j]<='9') {
				sum = sum+ (s[j]-'0');
			}
		}
		vec.push_back(make_pair(s,sum));
	}
	
	sort(vec.begin(),vec.end(),compare);
	
	for(int i=0;i<n;++i) {
		cout << vec[i].first << endl;
	}
}
