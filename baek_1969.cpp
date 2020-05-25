#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int N,M;
	string result="";
	int result_count=0;
	int alphabet[27]={0,};

	scanf("%d%d",&N,&M);
	string s[N];
		
	for(int i=0;i<N;++i) {
		cin >> s[i];	
	}
	
	for(int i=0;i<M;++i) {
		for(int k=0;k<26;++k) {
			alphabet[k]=0;
		}
		for(int j=0;j<N;++j) {
			alphabet[s[j][i]-'A']++;
		}
		int max=-1;
		int index=-1;
		for(int l=0;l<26;++l) {
			if(alphabet[l]>max) {
				max = alphabet[l];
				index=l;
		}
	}
		result_count+=N-max;
		result+=char(index+'A');
	
	}
	cout << result << endl;
	cout << result_count << endl;

	return 0;
}
