#include <iostream>
using namespace std;

class Base {
	public:
		Base () {
			cout<<"Base constructor called"<<endl;
		}
		~Base() {		//by wriring virtual polymorphsism destructor will be called
			cout<<"Base destructor called"<<endl;
		}
};

class Derived : public Base{
	public:
		Derived () {
			cout<<"Derived constructor called"<<endl;
		}
		~Derived() {
			cout<<"Derived destructor called"<<endl;
		}
};
		
int main () {
	Base *b = new Base();		//base class called
	delete b;
	cout<<"----------------------"<<endl;	//derived class called
	Derived *d = new Derived ();
	delete d;
	cout<<"----------------------"<<endl;	
	Base *polymorphism = new Derived ();
	delete polymorphism;
}



