#include <iostream>
using namespace std;

class account {		
	protected:
		string card_type;
		int id;
		int total_amount;
	public:
		void set1 (string ct, int i, int tm) {
			card_type=ct;
			id=i;
			total_amount=tm;
		}
		string get_card_type () {
			return card_type;
		}
		int getID () {
			return id;
		}	
		int get_total_amount () {
			return total_amount;
		}	
};

class withdrawl : virtual public account {
	protected:
		int withdraw;
	public:
		void set2 (int w) {
			withdraw=w;
		}
		int get1 () {
			return withdraw;
		}
};

class deposit : virtual public account {
	protected:
		int deposit;
	public:
		void set3 (int d) {
			deposit=d;
		}
		int get2 () {
			return deposit;
		}
};

class finalamount : public withdrawl , public deposit {
	protected:
		int total;
	public:
		int calculate () {
			total = total_amount + (get2()-get1());
			return total;
		}
		void display () {
			cout<<"Card type is : "<<card_type<<endl;
			cout<<"ID is : "<<id<<endl;
			cout<<"Actual amount was : "<<total_amount<<" Rs"<<endl;
			cout<<"Withdrawl was of : "<<withdraw<<" Rs"<<endl;
			cout<<"Deposit was of : "<<deposit<<" Rs"<<endl;
			cout<<"After transaction : "<<calculate()<<" Rs"<<endl;
		}
};

int main() {
	finalamount f;
	f.set1("Credit",101,50000);
	f.set2(10000);
	f.set3(5000);
	f.display();
}





