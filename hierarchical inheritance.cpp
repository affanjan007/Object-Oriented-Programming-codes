#include <iostream>
using namespace std;

class computer {		// base class
	protected:
		string manufacturer;
		string RAM;
	public:
		void set1 () {
			manufacturer="Dell";
			RAM="Megabytes";
		}	
};

class mycomputer1 : public computer {		// derived class 1
	protected:
		int model;
		int price;
	public:
		void set2 (int model,int price) {
			this->model=model;
			this->price=price;
		}	
	void display () {
		set1();
		cout<<"Manufacturer is : "<<manufacturer<<endl;
		cout<<"Ram is in : "<<RAM<<endl;
		cout<<"Model is : "<<model<<endl;	
		cout<<"Price is : "<<price<<endl;
	}
};

class mycomputer2 : public computer {		// derived class 2
	protected:
		int model;
		int price;
	public:
		void set3 (int model,int price) {
			this->model=model;
			this->price=price;
		}
	void display () {
		set1();
		cout<<"Manufacturer is : "<<manufacturer<<endl;
		cout<<"Ram is in : "<<RAM<<endl;
		cout<<"Model is : "<<model<<endl;	
		cout<<"Price is : "<<price<<endl;
	}
};


int main () {
	mycomputer1 m;
	m.set2(2015,80000);
	m.display();
	
	cout<<endl<<endl;
	
	mycomputer2 n;
	n.set3(2018,150000);
	n.display();	
}




