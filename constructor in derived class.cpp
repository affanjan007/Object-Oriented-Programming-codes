#include <iostream>
using namespace std;

class shape {
	float height,base;
	public:
		shape (float h, float b) : height(h),base(b) {}
		float get1() {
			return height;
		}
		float get2() {
			return base;
		}
};

class rectangle : shape {
	float area;
	public:
		rectangle (float h, float b) : shape (h,b) {}
		void display () {
			cout<<"Height is : " <<get1()<<endl;
			cout<<"Base is : " <<get2()<<endl;
			cout<<"Area is : " <<get1()*get2();
		}
};

int main () {
	rectangle r(5,6);
	r.display();
}