#include <iostream>
using namespace std;

int merge(int num1, int num2) {
    return (num1 + num2);
	cout<<"Function is called"<<endl;
}

//single parameter template function
template <typename name> 
	
name merge(name a,name b) {
	return (a+b);
	cout<<"Template is called"<<endl;
}

//double parameter template function
template<typename X, typename Y> 
	
void display(X a, Y b) {
    cout << a << " : " << b << endl;
}

int main() {
    cout << merge<string>("Affan", " Jan") << endl; 		//template called
    cout << merge(10, 10) << endl; 				  //exact match called
    cout << merge<float>(3.2, 6.8) << endl;		 //template called
    cout << merge<char>('A','J') << endl; 		//template called
    
    display<string, int>("number", 50);
    display<float, char>(7.66,'t');
    
//    float a;
//    a=average(10.0,2.5);
//    cout<<"Average is : "<<a;
    return 0;
}
