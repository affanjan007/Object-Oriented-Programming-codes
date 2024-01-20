/*#include <iostream>
using namespace std;

class prac {
	int x,y;
	
public:
	prac(int,int);
	void display();
};

prac :: prac(int a,int b)
	{
		x=a;
		y=b;
	}
void prac :: display() 
	{
		cout<<"Value of x and y is "<<x<<" and "<<y<<endl;
	}

int main() {
	prac p(5,6);
	p.display();
}*/

#include <iostream>
using namespace std;

class Boys {

    string name;
    string *haircolor;
    int *age;

    public:
    Boys() {
        name = "";
        haircolor = new string();
        age = new int;
        *haircolor = "";
        *age = 0;
    }
    Boys(Boys &old) {
        name = old.name;
        haircolor = old.haircolor;
        age = old.age;
    }
    void set_values(string nm, string hair, int a) {
        name = nm;
        *haircolor = hair;
        *age = a;
    }
    void display() {
        cout << name << endl;
        cout << *haircolor << endl;
        cout << *age << endl << endl;
    }
    ~Boys() {
        delete haircolor;
        delete age;
    }
};

int main() {

    Boys b1;
    b1.set_values("affan", "black", 19);

    b1.display();

    Boys b2(b1);

    b2.display();

    b2.set_values("zain", "golden", 22);

    b1.display();

    b2.display();
    
    return 0;
}