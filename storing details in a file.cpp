#include<iostream>
#include<fstream>
#include<string>
using namespace std;

	int main(){
		
		string name;
		int age;
		
		ofstream file;
		file.open("student details.txt", ios::out|ios::app );
		
		for(int i=0; i<=3; i++){
			
		cout<<"Enter your name: ";
		getline(cin,name);
		file<<name<<"\t";
		
		cout<<" Enter your age: ";
		cin>>age;
		file<<age<<endl;
		cin.ignore();
}
		
		file.close();
		
	return 0 ;
}