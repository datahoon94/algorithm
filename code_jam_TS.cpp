#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> odd;
vector<int> even;
int T,N;

int main(void) {
	scanf("%d",&T);
	int t=1;
	while(T--) {
		odd.clear();
		even.clear();
		scanf("%d",&N);
		for(int i=1;i<=N;++i) {
			int num;
			scanf("%d",&num);
			if(i%2==0) {
				even.push_back(num);
			}
			else odd.push_back(num);
		}
		
		sort(even.begin(),even.end());
		sort(odd.begin(),odd.end());
		cout << "Case #" << t++ <<":" << " ";
		
		
		int now=0;
		bool sorted=true;
		for(int i=0;i<N;++i) {
			if(i%2==0) {
				if(odd[i/2] < now) {
					cout << i-1 << '\n';
					sorted = false;
					break;	
				}
				else {
					now = odd[i/2];
				}
			}
			else {
				if(even[i/2] < now) {
					cout << i-1 << '\n';
					sorted = false;
					break;
				}
				else {
					now = even[i/2];
				}
			}
			
		}
		if(sorted) cout <<"OK" <<'\n';
	}
	return 0;
}

