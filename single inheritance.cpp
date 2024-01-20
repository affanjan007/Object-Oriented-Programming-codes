#include <iostream>
using namespace std;

class cube {				//base class
	int l;
	public:
		int b;
		void set();
		int getl ();
		int getb ();
};

void cube :: set () {
	l=5;
	b=4;
}
int cube :: getl () {
	return l;
}
int cube :: getb () {
	 return b;
}


class calculate : public cube {			//derived class
	int a;
	public:
		void area ();
		void display ();
};

void calculate :: area () {
	set ();
	a = getl() * b;
} 
void calculate :: display () {
	cout<<getl()<<endl;
	cout<<b<<endl;
	cout<<a<<endl;
} 

int main () {
	calculate c;
	c.set();
	c.area();
	c.display();
}


