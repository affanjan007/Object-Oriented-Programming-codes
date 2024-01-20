#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Student{
	string name;
	string id;
	string contact;
	public:
		friend istream& operator >> (istream& in, Student& obj);
		Student(){
		}
		Student(string n, string i, string c){
			name=n;
			id=i;
			contact=c;
		}
		void Add(){
			ofstream out;
			out.open("student2.txt", ios::out|ios::app);
			out.write((char*)this, sizeof(*this));
			out.close();
		}
		void display(){
			cout<<"Name:"<<name<<endl;
			cout<<"ID:"<<id<<endl;
			cout<<"Contact:"<<contact<<endl;
		}
		void Search(string n){
			ifstream in;
			in.open("student2.txt", ios::in);
			while(!in.eof()){
				in.read((char*)this, sizeof(*this));
				if((this->name).compare(n)==0){
					in.seekg(in.tellg()-sizeof(*this));
					in.read((char*)this, sizeof(*this));
					this->display();
					in.close();
					return;
				}
			}
			cout<<"Not Found\n";
		}
	
		void displayall(){
			ifstream in;
			in.open("student2.txt", ios::in);
			in.seekg(ios_base::beg);
				while(!in.eof()){
					in.read((char*)this, sizeof(*this));
					cout<<this->name<<endl;
					cout<<this->id<<endl;
					cout<<this->contact<<endl;
				}
			}
};
istream& operator >> (istream& in, Student& obj){
	cout<<"Enter name:";
	in>>obj.name;
	cout<<"Enter id:";
	in>>obj.id;
	cout<<"Enter number:";
	in>>obj.contact;
	return in;
}
int main(){
	string search;
	Student s1, s2, s3;
	cin>>s1;
	cin>>s2;
	cin>>s3;
	s1.Add();
	s2.Add();
	s3.Add();
	cout<<"Enter name to search:";
	cin>>search;
	s1.Search(search);
	
	return 0;
}