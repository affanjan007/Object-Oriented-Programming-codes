#include <iostream>
#include <vector>
using namespace std;

class student {
	string name;
	string roll_no;
	public:
		student() {
			name="";
			roll_no="";
		}
		
		void set1(string n) {
			name=n;
		}
		
		void set2(string r) {
			roll_no=r;
		}
		
		string get1() {
			return name;
		}
		
		string get2() {
			return roll_no;
		}
		
		void add_student(vector<string> &v,vector<string> &v2) {
			int size=2;
			for(int i ; i<size ; i++) {
				cout<<"Enter student name : ";
				cin>>name;
				set1(name);
				cout<<"Enter roll number : ";
				cin>>roll_no;
				set2(roll_no);
				v.push_back(get1());
				v.push_back(get2());
			}
		}
		
		void remove_student(vector<string> &v) {
			v.pop_back();
			cout<<endl<<name<<" is removed from vector"<<endl;
		}
		
		void display_students(vector<string> &v,vector<string> &v2) {
			cout<<endl;
			for (int i=0 ; i<v.size() ; i++) {
			cout<<"Name : "<<v[i]<<"\t\tRoll Number : "<<v2[i]<<endl;
			}		 
		}
};

int main() {
	student s;
	vector<string> v1;
	vector<string> v2;
	
	s.add_student(v1,v2);
	s.display_students(v1,v2);
//	s.remove_student(v1);
//	s.display_students(v1,v2);
	
}