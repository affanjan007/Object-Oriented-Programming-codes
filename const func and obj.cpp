#include <iostream>
using  namespace std;

class st {
	int age,id;
	
public:
	st(int a,int i) {
		age=a;
		id=i;
	}
    void display() const {
		cout<<"ID is: "<<id<<endl<<"Age is: "<<age;
	}
	
};

int main() {
	const st obj(10,20);
	obj.display();
	
}