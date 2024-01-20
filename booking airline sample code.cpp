#include <iostream>
using namespace std;

class airline {
	public:
	string flightNum[7]={"AK-1001","JK-9000","th-5500","BQ-6600","OP-4500","BJ-2000","AC-3333"};
	string flightDep[7]={"LosAngeles","London","Istanbul","Paris","LosAngeles","London","Paris"};
	string flightDepTime[7]={"9:00am","12:30pm","6:00pm","9:00pm","11:00pm","1:00am","3:00am"};
	string flightdates[7]={"20/5/2023","20/5/2023","20/5/2023","20/5/2023","21/5/2023","21/5/2023","21/5/2023"};
	int flightStopOvers[7]={3,     2,1,     0,3,     1,     1};
	int numBusinessClass[7]={0,     5,0,     10,2,     2,     0};
	int numEconomyClass[7]={30,     45,10,     20,15,     19,     28};
};


class Customer {
	string name;
	string address,pNum,cNum;
	public:
		Customer(string n,string a,string p,string c) {
			name=n;
			address=a;
			pNum=p;
			cNum=c;
		}
		string departureTime;
		string destination;
		string choiceClass;
		airline a;
		int booking=0;
		int x;
		void setname(string n) {
			name=n;
		} 
		string getname() {
			return name;
		}
		void setpNum(string p) {
			pNum=p;
		} 
		string getpNum() {
			return pNum;
		}
		void setcNum(string c) {
			cNum=c;
		} 
		string getcNum() {
			return cNum;
		}	
		void placebooking () {
			cout<<"Enter destination : ";
			cin>>destination;
			cout<<"Which class you want to book (Business/Economy): ";
			cin>>choiceClass;
			cout<<"Enter time of your flight : ";
			cin>>departureTime;
				for (int i=0 ; i<7 ; i++) {
					if(a.flightDepTime[i]==departureTime && a.flightDep[i]==destination) {
						if (choiceClass=="Economy") {
								if(a.numEconomyClass[i]!=0) {
									cout<<endl<<"Flight to "<<a.flightDep[i]<<" is available at "<<a.flightDepTime[i]<<endl;
									booking=1;
									x=i;
									a.numEconomyClass[i]--;
								}
								else {
									cout<<"No seats!"<<endl;
								}
						}
						if (choiceClass=="Business") {
								if(a.numBusinessClass[i]!=0) {
									cout<<endl<<"Flight to "<<a.flightDep[i]<<" is available at "<<a.flightDepTime[i]<<endl;
									booking=1;
									x=i;
									a.numBusinessClass[i]--;
								}
								else {
									cout<<"No seats!"<<endl;
								}	
						}
					}
				}
				if (booking==0) {
					cout<<"No flight available!"<<endl;	
					display(0);
				}
				if (booking==1) {
					int c;
					cout<<endl<<"To proceed enter 1 : ";
					cin>>c;
					payment(1);	
				}
		}
	
		void display (int b) {
			string ch;
			if (1==b) {
				cout<<endl<<endl<<"---------FLIGHT DETAILS---------"<<endl;
				cout<<"Flight number : " <<a.flightNum[x]<<endl;
				cout<<"Flight Departure Time : " <<a.flightDepTime[x]<<endl;
				cout<<"Departure to : " <<a.flightDep[x]<<endl;
				cout<<"Total number of stop overs : " <<a.flightStopOvers[x]<<endl;
				cout<<"Customers name : "<<name<<endl;
				cout<<"Customers Passport number : "<<pNum<<endl;
				cout<<"Customers contact number : "<<cNum<<endl;
				cout<<"Bill payed : 50%"<<endl;
			}
			else {
				cout<<endl<<endl<<"Do you need a tentative plan ? (yes/no) : ";
				cin>>ch;
					if (ch=="yes") {
				flightsSchedule();
				}
			}
		}
		
		void flightsSchedule() {
			system("cls");
			cout<<"---------TENTATIVE PLAN---------"<<endl<<endl;
			cout<<"Flight Number\tDeparture\t\tTime\t\tDate\t\tBusiness Seats\tEconomy Seats"<<endl;
			cout<<"------------------------------------------------------------------------------------------------------"<<endl;
			for (int i=0 ; i<7 ; i++) {
				cout<<a.flightNum[i]<<"\t\t"<<a.flightDep[i]<<"\t\t"<<a.flightDepTime[i]<<"\t\t"
					<<a.flightdates[i]<<"\t\t"<<a.numBusinessClass[i]<<"\t\t"<<a.numEconomyClass[i]<<endl;
			}
			string ch;
			cout<<endl<<"Do you want to book a flight from the above schedule ? (yes/no) : ";
			cin>>ch;
			if (ch=="yes") {
				placebooking();
			}
		}
		
		void payment (int c) {
			string ch;
			system("cls");
			cout<<"Your booking is confirmed and you have to pay 50% of your total payement"<<endl;
			cout<<"Total Bill is 200,000 and you have to pay 100,000 now"<<endl;
			cout<<"Enter 'yes' to confirm payemnet and 'no' to cancel booking : ";
			cin>>ch;
			
			if (ch=="yes") {
				int z=booking;
				display(z);
			}
		}
		
		void frontpage () {
			int ch;
			cout<<"------------------WELCOME TO BOOKING PORTAL------------------"<<endl<<endl;
			cout<<"CHHOSE FROM GIVEN OPTIONS"<<endl<<endl;
			cout<<"1)To display tentative plan"<<endl;
			cout<<"2)To book a flight"<<endl;
			cin>>ch;
			system("cls");
			
			if (ch==1) {
				flightsSchedule();
			}
			else if (ch==2) {
				placebooking();
			}
			else {
				cout<<"Wrong option!"<<endl;
			}
		}
};

int main () {
	Customer c("Affan","58-A","123","0320");
	c.frontpage();
	
}