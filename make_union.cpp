#include <iostream>
using namespace std;

int parent[11];

int get_parent(int* parent,int c) {
	if(parent[c]!=c) return get_parent(parent,parent[c]);
	else return c;
}

void make_union(int* parent,int a,int b) {
	if(parent[a]<parent[b]) parent[b] = get_parent(parent,a);
	else parent[a] = get_parent(parent,b);
}

int main(void) {
	for(int i=1;i<=10;++i) {
		parent[i] = i;
	}
	
	make_union(parent,1,4);
	make_union(parent,1,2); 
	make_union(parent,1,5);
	make_union(parent,2,4); 
	make_union(parent,2,5);
	make_union(parent,3,5); 
	//make_union(parent,3,6);
	//make_union(parent,4,7); 
	//make_union(parent,5,6);
	//make_union(parent,5,7); 
	//make_union(parent,1,7);
	
	for(int i=1;i<=7;++i) {
		cout << parent[i] << endl;
	}

	return 0;
}
