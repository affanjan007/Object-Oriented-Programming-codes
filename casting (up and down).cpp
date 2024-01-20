#include <iostream>
using namespace std;

class Base {
	public:
		int base=100;
		virtual void display()=0;
//		{  // by removing virtual, base class display will be called
//			cout<<"The value of variable base is : "<<base<<endl;
//		}
};

class Derived : public Base{
	public:
		int derived=50;
		void display() {
			cout<<"The value of variable derived is : "<<derived<<endl;
			cout<<"The value of variable base in D class is : "<<base<<endl;
		}
};
		
int main () {
	Base *ptr_B;
	Derived obj_D;
	ptr_B=&obj_D;	//up casting (run time)
	ptr_B->display();
	cout<<"---------------------------"<<endl;
	
//	Base obj_B;
//	Derived *ptr_D;
//	ptr_D=&obj_B; 		 //will throw error cause we cannot down cast like this we will need dynamic casting
//	ptr_D->display();

	Derived *ptr_D= (Derived*) (ptr_B); //we have to explicitly down cast
	ptr_D->display();
	cout<<"---------------------------"<<endl;
	
	ptr_D=dynamic_cast <Derived*> (ptr_B); // down casting with dynmaic casting 
	ptr_D->display();
	cout<<"---------------------------"<<endl;
	
	ptr_B=dynamic_cast <Base*> (ptr_D);	   // up casting with dynmaic casting 
	ptr_B->display();
	
// suntax:
// derived class pointer = dynamic_cast <derived class name*> (base class pointer)
}