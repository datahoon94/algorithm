#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string s;
	string temp="";
	int result=0;
	bool minus=false;
	
	cin >> s;
	
	for(int i=0;i<=s.size();++i) {
		if(s[i] == '+' || s[i] == '-' || s[i] == '\0') {
			if(minus == false) {
				result += stoi(temp);
				temp="";
			}
			else {
				result += -stoi(temp);
				temp="";
			}
			if(s[i] =='-') minus=true;
		}
		else temp+=s[i];
	}
	
	cout << result << endl;
	return 0;
}
