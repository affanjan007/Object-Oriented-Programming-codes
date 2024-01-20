#include <iostream>
using namespace std;

template <class T1 , class T2>
class complex {
	T1 real;
	T2 imag;
	public:
		complex (T1 a,T2 b) {
			real=a;
			imag=b;
		}
		void display () {
			cout<<real<<" + "<<imag<<"i"<<endl;
		}
};

int main() {
	complex <int,int>obj1(5,6);
	obj1.display();
	
	complex <float,int>obj2(2.75,4);
	obj2.display();
}