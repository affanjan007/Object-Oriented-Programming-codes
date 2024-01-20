#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	fstream out;
	out.open("myfile.txt" , ios::out | ios::in);
	
	if (out.is_open()) {
		
		out<<"My name is affan."<<endl;
		out<<"I m currently studying in FAST in cs."<<endl;
		out<<"I m 19 years old";
	
		string s;
		
		while(getline(out,s)) {
			cout<<s<<endl;
		}	
		cout<<"Data successfully readed!"<<endl;
	}
	
	out.close();
}

