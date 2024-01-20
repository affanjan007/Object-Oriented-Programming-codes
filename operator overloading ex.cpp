#include <iostream>
using namespace std;

class test {
	int score;
	public:
		test() {
			score=5;
		}
		test(int s) {
			score=s;
		}
		void print () {
			cout<<"Score is : "<<score<<endl;
		}
		test operator +(test t) {		//addition
			test temp;
			temp.score=score + t.score;
			return temp;
		}
		void operator ++() {	//pre increment
			++score;
		}
		void operator --(int) {		//post decrement
			score--;
		}
		test operator +=(test obj) {		// Add Rupees.
			score += obj.score;
			return *this;
		}
};

int main() {
	test t1(5);
	test t2(2);
	test t3;
	t3=t1+t2;
	t3.print();
	
	++t3;
	t3.print();
	
	t3--;
	t3.print();
	
	t3+=t3;
	t3.print();
}
