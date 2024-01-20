#include <iostream>
#include <vector>
using namespace std;

void func(vector<int> &v) {
	for (int i=0 ; i<v.size() ; i++) {
			cout<< v[i]<<endl;
	} 
}

int main () {
	vector<int> v;
	int element,size=3;
	for (int i=0 ; i<size ; i++) {
		cout<<"Push element in the vector : ";
		cin>>element;
		v.push_back(element);		
	}
	v.pop_back();
	func(v);
	
	
	for (int i=0 ; i<3 ; i++) {
		cout<<"Insert element int the vector from end: ";
		cin>>element;
		vector<int> :: iterator it = v.end();
		v.insert(it-1,element);
	}
	
	cout<<endl<<"After insertion"<<endl;
	func(v);
	
	cout<<endl<<"After emptying vector"<<endl;
	v.clear();
	func(v);
	
}