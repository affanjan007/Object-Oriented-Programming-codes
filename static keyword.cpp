#include <iostream>
using namespace std;

class Emp
{
	int id;
	static int count;

public:
	void setID () {
		cout<<"Enter employee id: ";
		cin>>id;
		count++;
	}	
	void display () {
		cout<<"The ID is: "<<id<<", the count is: "<<count;
		cout<<endl;	
	}
	static void counter () {
		cout<<count+100;
		cout<<endl;
	}
};

int Emp :: count=0;

int main(){
	Emp  affan,mh;
	
	affan.setID();
	affan.display();
	//Emp :: counter();
	affan.counter();

	mh.setID();	
	mh.display();
	Emp :: counter();
}