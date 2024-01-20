#include <iostream>
using namespace std;

class student {
	public:
	int id;
	string name;
	student () {}
};


class position : public student {
	public:
	int rank;
	position (int id, string name, int rank)
	{
		this-> id=id;
		this-> name=name;
		this-> rank=rank;
	}	
	
	void getdata () 
	{
		cout<<id<<endl;
		cout<<name<<endl;
		cout<<rank<<endl;
	}
};


int main () {
	position p(1,"affan",2);
	p.getdata();
}

