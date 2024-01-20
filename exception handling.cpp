#include <iostream>
using namespace std;

class division {
	float num;
	float denum;
	float ans;
	public:
		division(float n,float d) {
			num=n;
			denum=d;
		}
		
		void func() {
			try {
				if (num<0 || denum<0) {
					throw 'c';
				}
				else if (denum==0) {
					throw ("infinite");
				}
				else {
					ans = (num/denum);
					throw ans;
				}
			}
			
			catch(char c) {
				cout<<"Please enter a positive number!"<<endl;
			}
			catch(string s) {
				cout<<"Denominator cannot be 0!"<<endl;
			}
			catch(float a) {
				cout<<"Answer is : "<<a<<endl;
			}
		}
};

int main () {
	division d(5.0,2.5);
	d.func();
}