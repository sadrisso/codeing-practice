#include<iostream>
using namespace std;

	class student{
		public:
		int id;
		float cgpa;
		
	void display(){
		cout<<id<<" "<<cgpa<<endl;
		}
		
	student(int x,float y){
		id=x;
		cgpa=y;
		}
		
	student (){
		cout<<" This is constractor number two"<<endl;
		}
	};
	
	int main(){
		student Alim(100, 3.44);
		Alim.display();
		
		student Suparna(101, 3.55);
		Suparna.display();
		
		student object();
		
		return 0;
		}