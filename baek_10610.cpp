#include <iostream>
#include <string>
using namespace std;

string s;
int d[10];
int temp;

int main(void) {
	cin >> s;
	
	for(int i=0;i<s.size();++i) {
		d[s[i]-'0']++;
		temp+=s[i]-'0';
	}
	
	if(temp%3==0 && d[0]!=0) {
		for(int i=9;i>=0;--i) {
			while(d[i]!=0) {
				printf("%d",i);
				d[i]--;
			}
		}
	}
	else printf("-1");
	return 0;
}
