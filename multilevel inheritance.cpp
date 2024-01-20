#include <iostream>
using namespace std;

class student {		
	protected:
		int roll_number;
	public:
		void setRoll_num (int r) {
			roll_number=r;
		}
		int getRoll_num () {
			return roll_number;
		}
};

class exam : public student {
	protected:
		float math;
		float physics;
	public:
		void setMarks (float m1,float m2) {
			math=m1;
			physics=m2;
		}		
		int getM () {
			return math;
		}	
		int getP () {
			return physics;
		}	
};

class result : public exam {
	protected:
		float percentage;
	public:
		float calculate_Result () {
			return ((math+physics)/2);
		}
		void display () {
			cout<<"Roll Number : "<<getRoll_num()<<endl;
			cout<<"Marks obtained in Math : "<<getM()<<endl;
			cout<<"Marks obtained in Physics : "<<getP()<<endl;
			cout<<"Percentage is : "<<calculate_Result()<<"%"<<endl;	
		}
};	

int main () {
	result affan;
	affan.setRoll_num(101);
	affan.setMarks(90,95);
	affan.display();
}
