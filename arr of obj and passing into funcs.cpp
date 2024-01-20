#include <iostream>
using namespace std;

class User {
	int salary;
	int id;
	static int count;
public:
	
	void set() {
		cout<<"Enter the user ID: ";
		cin>>id;
		cout<<"Enter the salary: ";
		cin>>salary;
	}
	void get() {
		cout<<"The user ID is "<<id<<" and salary is "<<salary<<endl<<endl;
		count++;
	}
	 void display(){
		cout<<"The total number of fb users are: "<<count;	
	}
};

int User :: count;

int main() {
	User fb[5];
	for(int i=0;i<5;i++) {
		fb[i].set();
		fb[i].get();
	}
	fb[5].display();
}