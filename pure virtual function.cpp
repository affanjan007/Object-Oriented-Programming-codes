#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw()  {
        cout << "Drawing a circle." << std::endl;
    }
};

class Square : public Shape {
public:
    void draw()  {
        cout << "Drawing a square." << std::endl;
    }
};

int main() {
    Circle circle;
    Square square;

	Shape* s1=&circle;
	Shape* s2=&square;
	
	s1->draw();
	s2->draw();
	

    return 0;
}
