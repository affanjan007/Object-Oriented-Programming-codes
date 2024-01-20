#include <iostream>
using namespace std;

class Shop
{
	int itemID[10];
	int itemPrice[10];
	int counter;
	
public:
	void initCounter() {
			counter=1;
		}
	void setPrice();
	void display();
};

void Shop :: setPrice () {
	cout<<"Enter ID of item number "<<counter<<": ";
	cin>>itemID[counter];
	cout<<"Enter price of item number "<<counter<<": " ;
	cin>>itemPrice[counter];
	counter++;
}
void Shop :: display () {
	for (int i=1 ; i<counter ; i++) {
		cout<<"The price of item number "<<itemID[i]<<" is "<<itemPrice[i]<<endl;
	}
}

int main() {
	Shop d;
	string choice;
	d.initCounter();
	cout<<"Do you want to set price of another item (y/n): ";
	cin>>choice;
	while (choice=="y") {
		d.setPrice();
		cout<<"Do you want to set price of another item (y/n): ";
		cin>>choice;
	}
	cout<<endl<<"DISPPLAY";
	cout<<endl;
	d.display();
}

