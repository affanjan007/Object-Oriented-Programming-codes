#include <iostream>
using namespace std;

class Passenger {
	string number,pickup,drop_off;
	public:
		string type;
		int km;
		Passenger () {
			number="";
			pickup="";
			drop_off="";
			type="";
			km=0;
		}

	void pInfo () {
		cout<<"Enter mobile number : ";
		cin>>number;
		cout<<"Enter pickup location : ";
		cin>>pickup;
		cout<<"Enter drop off location : ";
		cin>>drop_off;
		cout<<"Enter passenger type i.e (Alpha , Beta , Gamma) : ";
		cin>>type;
		cout<<"Enter total km to travel : ";
		cin>>km;
	}		
};


class Driver : public Passenger {
	string name,id;
	int fuel,earn;
	static int count1;
	static int count2;
	public:
		int temp=0;
		Driver () {}
		Driver (string n,string i) {
			name=n;
			id=i;
			fuel=100;		//intializing fuel as 100 litres
			earn=0;			//intializing current earings as 0
		}
	
	int earning (string type,int km) {
		if (type=="Alpha") {
			earn = 150 * km;
			count1 = count1 + 1;
		}
		else if (type=="Beta") {
			earn = 100 * km;
			count2 = count2 + 1;
		}
		else if (type=="Gamma") {
			earn = 70 * km;
			count2 = count2 + 1;
		}
		else {
			cout<<"Enter valid type!"<<endl;
		}
		temp = temp + earn;
		return temp;
	}
	
	int checkbonus () {
		if(count1>count2) {
			temp = temp + 500;
		}
		else {
			temp = temp;
		}
		return temp;
	}
	
	int fuelLeft (int km) {
		fuel = fuel - (km * 2);
		return fuel;
	}
	
	void print () {
		checkbonus();
		cout<<endl<<"------SUMMARY------"<<endl;
		cout<<"Driver name : "<<name<<endl;
		cout<<"Driver ID : "<<id<<endl;
		cout<<"Number of Alpha passengers picked : "<<count1<<endl;
		cout<<"Number of other passengers picked : "<<count2<<endl;
		cout<<"Driver total earning for the day : "<<temp<<" Rs"<<endl;
		cout<<"Total fuel left out of 100 litres : "<<fuel<< " litres"<<endl;
	}
};

int Driver :: count1;
int Driver :: count2;

	
int main() {
	Driver d("Affan","22k-4475");
	Passenger p1,p2,p3;
	
	cout<<"------PASSENGER 1------"<<endl;
	p1.pInfo();
    d.earning(p1.type,p1.km);
	d.fuelLeft(p1.km);
	
	cout<<endl<<"------PASSENGER 2------"<<endl;
	p2.pInfo();
	d.earning(p2.type,p2.km);
	d.fuelLeft(p2.km);
	
	cout<<endl<<"------PASSENGER 3------"<<endl;
	p3.pInfo();
	d.earning(p3.type,p3.km);
	d.fuelLeft(p3.km);
	
	d.print();
	
}