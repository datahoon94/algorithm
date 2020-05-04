#include <iostream>
using namespace std;

int main(void) {
	int array[10] = {1,5,10,8,7,6,4,3,2,9};
	int temp;
	
	for(int i=0;i<10;++i) {
		for(int j=0;j<9-i;++j) {
			if(array[j] < array[j+1]) {
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}	
	}
	
	for(int i=0;i<10;++i) {
		printf("%d ",array[i]);
	}
	return 0;
}
