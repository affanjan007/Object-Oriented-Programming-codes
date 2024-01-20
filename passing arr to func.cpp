#include <iostream>
using namespace std;

int func (int array[], int size);

int main () {
	int a[3]={100,600,700};
	int b[5]={00,10,20,30,40};
	
    func(a,3);
	cout<<endl;
	func(b,5);
} 

int func (int array[], int size) {
	for (int i=0 ; i<size ; i++) {
		cout<<array[i]<<endl;
	}
}