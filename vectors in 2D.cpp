#include <iostream>
#include <vector>
using namespace std;

void func(vector<vector<int>> &v) {
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++) { 
			cout << v[i][j] << endl;
		}
	}
}

int main () {
	vector <vector<int>> v;
	int per,marks;
	int size=3;
	
	for(int i=0 ; i<size ; i++) {
		vector<int> temp;
		cout<<"Enter percentage of person "<<i+1<<" : ";
		cin>>per;
		for (int j=0 ; j<size ; j++) {
			cout<<"Enter marks scored in subject "<<j+1<<" : ";
			cin>>marks;
			temp.push_back(marks);
		}
		v.push_back(temp);
	}	
	func(v);
}