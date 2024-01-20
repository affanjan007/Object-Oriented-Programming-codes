#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Book {
	int book_id;
	string title;
	float price;
	public:
		Book() {
			book_id=0;
			title="";
			price=0.0;
		}

		void getdata() {
			cout<<"Enter book ID : ";
			cin>>book_id;
			cout<<"Enter book title : ";
			cin>>title;
			cout<<"Enter book price : ";
			cin>>price;
		}
		
		void display() {
			cout<<"Book ID : "<<book_id<<endl;
			cout<<"Book title : "<<title<<endl;
			cout<<"Book price : "<<price<<endl;
		}
		
		int storebook() {
			ofstream out;
			out.open("handling.txt", ios::out);
			out.write((char*)this, sizeof(*this));
			out.close();
			return(1);
		}
		
		void Search(string n){
			ifstream in;
			in.open("handling.txt", ios::in|ios::binary);
			while(!in.eof()){
				in.read((char*)this, sizeof(*this));
				if((this->title).compare(n)==0){
					in.seekg(in.tellg()-sizeof(*this));
					in.read((char*)this, sizeof(*this));
					this->display();
					in.close();
					return;
				}
			}
		}
};

int main() {
	Book b[3];
	int i;
	
	for(i=0; i<3; i++) {
		b[i].getdata();	
	}
	
	string search;
	cout<<endl<<endl;
	cout<<"Enter book title to search : ";
	cin>>search;
	
	for(i=0; i<3; i++) {
		b[i].Search(search);
	}
}