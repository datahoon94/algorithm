#include <iostream>
using namespace std;

void what(string a) {
	cout << a << endl;
	cout << a.length() << endl;
}

int main(void) {
	string a = "abc";
	what(a);
	return 0;
}
