#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int get_parent(int* parent,int c) {
	if(parent[c]!=c) return get_parent(parent,parent[c]);
	else return c;
}

void make_union(int* parent,int a,int b) {
	if(parent[a]<parent[b]) parent[b] = get_parent(parent,a);
	else parent[a] = get_parent(parent,b);
}

class Edge {
public:
	int node[2];
	int distance;
	Edge(int a,int b,int distance) {
		this->node[0] = a;
		this->node[1] = b;
		this->distance = distance;
	}
	bool operator <(Edge &edge) {
		return this->distance < edge.distance;
	}
};


int main(void) {
	int n=7;
	
	vector<Edge> v;
	v.push_back(Edge(1,7,12));
	v.push_back(Edge(1,4,28));
	v.push_back(Edge(1,2,67));
	v.push_back(Edge(1,5,17));
	v.push_back(Edge(2,4,24));	
	v.push_back(Edge(2,5,62));
	v.push_back(Edge(3,5,20));
	v.push_back(Edge(3,6,37));
	v.push_back(Edge(4,7,13));
	v.push_back(Edge(5,6,45));
	v.push_back(Edge(5,7,73));
	
	sort(v.begin(),v.end());
	
	int parent[n+1];
	
	for(int i=1;i<=n;++i) {
		parent[i] = i;
	}
	
	int sum=0;
	for(int i=1;i<=v.size();++i) {
		if(parent[v[i-1].node[0]]!=parent[v[i-1].node[1]]) {
			sum+=v[i-1].distance;
			make_union(parent,v[i-1].node[0],v[i-1].node[1]);
		}
	}

	cout << sum << endl;
	return 0;
}
