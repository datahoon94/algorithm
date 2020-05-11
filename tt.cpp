#include <iostream>
#include <queue>

using namespace std;

priority_queue<int,vector<int>,less<int>> pq;
int main(void) {
	pq.push(1);
	cout << sizeof(pq.top()) << endl;
}
