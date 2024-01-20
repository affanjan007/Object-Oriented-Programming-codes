#include <iostream>
using namespace std;

class A;


class B {
	public:
		int sum(A op, A ot);
};

class A {
	int a;
//	friend B :: sum(A op, A ot);  	//friend func of B class 

	friend class B;					//friend class B
	
	public:
		void set (int x) {
			a=x;
		}
};

int B :: sum(A op, A ot) {
	return op.a + ot.a;
}

int main () {
	A op,ot;
	op.set(2);
	ot.set(4);
	B d;
	cout<<"Sum is "<<d.sum(op,ot);
	
}