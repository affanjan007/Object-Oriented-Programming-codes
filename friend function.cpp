#include <iostream>
using namespace std;

class A {
	int a;
	int b;
	public:
		void set (int x, int y) {
			a=x;
			b=y;
		}
		friend int sum(A);
};

int sum (A a) {
	int c=a.a + a.b;
	return c;
}

int main () {
	A a;
	a.set(2,3);
	cout<<"Sum is "<<sum(a);
}
