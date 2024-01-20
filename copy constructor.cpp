#include <iostream>
using namespace std;

class test {
	string *name;
	int *age;
	string country;
	
public:
	
	test() {
		name= new string();
		age=new int;
		*name="";
		*age=0;
		country="";
	}
	test(test &obj) {
		cout<<endl<<"Copy is called!!"<<endl;
		name=obj.name;
		age=obj.age;
		country=obj.country;
	}
	void set(string n,int a,string c) {
		*name=n;
		*age=a;
		country=c;
	}
	void display() {
		cout<<"Name is: "<<*name<<endl;
		cout<<"Age is: "<<*age<<endl;
		cout<<"Country is: "<<country<<endl<<endl;	
	}
	~test(){
	delete name;
	delete age;
	}
};

int main(){
	test a;
	a.set("Affan",19,"Pakistan");
	a.display();
	
	test b(a);
	b.display();	
	cout<<endl<<endl;
	
	b.set("Jan",25,"India");
	a.display();
	b.display();
	cout<<endl<<endl;
	
	a.set("Khan",20,"England");
	a.display();
	b.display();
}           


