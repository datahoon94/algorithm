#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v;

bool comp(int a,int b) {
	return a>b;
}

int main(void) {
    int T,D;
    int t_c=1;
    string P;
    int weight_sum=0;
    int weight=0;
    int num=0;
    int total_num=1;
    
    scanf("%d",&T);
    
    while(T--) {
    	weight_sum = 0;
    	total_num=1;
    	weight=1;
    	num=0;
        scanf("%d",&D);
        cin >> P;
        printf("Case #%d: ",t_c++);
		v.clear();
		for(int i=0;i<P.size();++i) {
			if(P[i] =='C') {
				num++;	
				weight*=2;
			}
			else {
				total_num+=num;
				weight_sum+=weight;
				v.push_back(weight);
			}
		}
		bool find = false;
		int result=0;
		while(total_num--) {
			if(weight_sum<=D) {
				find = true;
				printf("%d\n",result);
				break;
			}
			sort(v.begin(),v.end(),comp);
			weight_sum -= v[0]/2;
			v[0]/=2;
			result++;
		}
        if(!find) cout << "IMPOSSIBLE" << '\n';
    }
    return 0;
    
}
