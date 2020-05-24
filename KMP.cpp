#include <iostream>
#include <vector>

using namespace std;
int count,result;

vector<int> makeTable(string pattern) {
	int patternSize = pattern.size();
	vector<int> table(patternSize,0);
	int j = 0;
	for(int i=1;i<patternSize;++i) {
		while(j>0 && pattern[i] !=pattern[j]) {
			j = table[j-1];
		}
		if(pattern[i] == pattern[j]) {
			table[i] = ++j;
		}
	}
	return table;
}

void KMP(string parent, string pattern) {
	vector<int> table = makeTable(pattern);
	int parentSize = parent.size();
	int patternSize = pattern.size();
	int j=0;
	for(int i=0;i<parentSize;++i) {
		if(j>0 && parent[i] !=pattern[j]) {
			j = table[j-1];
		}
		if(parent[i] == pattern[j]) {
			if(j ==patternSize-1) {
				result = i-patternSize+2;
				count++;
				j = table[j];
			} else {
				j++;
			}
		}
	}
	printf("%d\n%d",count,result);
}

int main(void) {
	string parent;
	string pattern;
	getline(cin,parent);
	getline(cin,pattern);
	KMP(parent,pattern);
	return 0;
}
