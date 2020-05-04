#include <iostream>
using namespace std;

int main(void) {
	int arr[10] = {1,10,5,8,7,6,4,3,2,9};
	int temp,index;
	for(int i=0;i<10;++i) {
		int min=arr[i];
		for(int j=i;j<10;++j) {
			if(min>arr[j]) {
				min = arr[j];
				index = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
	
	for(int i=0;i<10;++i) {
		cout << arr[i] << " ";
	}
	return 0;
}
