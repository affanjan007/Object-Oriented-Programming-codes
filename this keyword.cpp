#include <iostream>
using  namespace std;

class st {
	int x,y;
	
public:
	st(int x,int y) {
		this-> x=x;
		this-> y=y;
	}
	void display()  {
		cout<<"x is: "<<x<<endl<<"y is: "<<y;
	}
	
};
int main() {
	 int x=5,y=5;
	 st a(x,y);
	 a.display();
}