#include <iostream>
using namespace std;

int main(void) {
	int arr[10] = {1,10,5,8,7,6,4,3,2,9};
	int temp;
	for(int i=0;i<10;++i) {
		for(int j=0;j<i;++j) {
			if(arr[i]<arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for(int i=0;i<10;++i) {
		cout << arr[i] << " ";
	}
	return 0;
}
