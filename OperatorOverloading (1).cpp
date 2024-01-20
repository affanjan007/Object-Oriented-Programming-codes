//Rupee.h
#include <sstream> // The class stringstream
#include <iomanip>
#include <iostream>
using namespace std;
class Rupee {
	private:
	long data;
	public:
	Rupee( int rupee = 0) {
		data = rupee;
	}
	Rupee operator-() const  {		// Negation (unary minus) 
		Rupee temp;
		temp.data = -data;
		return temp;
	}
		
	Rupee operator-( const Rupee& obj) const {		// Subtraction.
		Rupee temp;
		temp.data = data - obj.data;
		return temp;
	}
	Rupee& operator+=( const Rupee& obj) {		// Add Rupees.
		data += obj.data;
		return *this;
	}
	Rupee& operator-=( const Rupee& obj) {	// Subtract Rupees.
		data -= obj.data;
		return *this;
	}
	friend ostream &operator<<( ostream &os, const Rupee &e );
	};
	ostream& operator<<(ostream& os, const Rupee& e) { 	//Overloading << operator
		os << e.data;
		return os;
	}
	Rupee operator+( const Rupee& e1, const Rupee& e2)  {	 // addition.
		Rupee temp(e1);
		temp += e2;
		return temp;
}

int main() {
	Rupee wholesale(20), retail;
	retail = wholesale; // Standard assignment
	cout << "Wholesale price: "<<wholesale;
	cout << "\nRetail price: "<<retail;
	Rupee discount(2);
	Rupee a(50);
	retail -= discount;
	cout << "\nRetail price including discount: "<<retail;
	wholesale = 34.10;
	cout << "\nNew wholesale price: "<<wholesale;
	retail = wholesale + retail;
	cout << "\nNew retail price: "<<retail;
	Rupee profit( retail - wholesale);
	cout << "\nThe profit: "<<profit;
	profit = -profit;
	cout << "\nThe profit after unary minus: "<<profit;

return 0;
}



