#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> gems;
vector<string> gems_unique;
vector<string> temp_gems;

bool find(string s) {
	for(int i=0;i<temp_gems.size();++i) {
		if(s.compare(temp_gems[i])==0) return 1;
	}
	return 0;
}

bool all_find(void) {
	for(int i=0;i<gems_unique.size();++i) {
		if(find(gems_unique[i])==0) return 0;
	}
	return 1;
}

vector<int> solution(vector<string> gems) {
    vector<int> answer;
    
    gems_unique = gems;
    sort(gems_unique.begin(),gems_unique.end());
    gems_unique.erase(unique(gems_unique.begin(),gems_unique.end()),gems_unique.end());

	for(int i=0;i<gems_unique.size();++i) {
		temp_gems.push_back(gems[i]);
	}
	
	int min=gems_unique.size();
	
	while(!all_find()) {
		min++;
		temp_gems.clear();
		for(int i=0;i<min;++i) {
			temp_gems.push_back(gems[i]);
		}
	}
	
	cout << min << endl;
    return answer;
}

int main(void) {
	gems = {"DIA", "RUBY", "RUBY", "DIA", "DIA", "EMERALD", "SAPPHIRE", "DIA"};
	solution(gems);
}
