#include<iostream>
using namespace std;

	class student{
		public:
		int id;
		float cgpa;
		
	void display(){
		cout<<id<<" "<<cgpa<<endl;
		}

	student(int x,int y){
		id = x;
		cgpa = y;
		}
 };
	
	int main(){
		student Alim(101, 2.22);
		Alim.display();
		
		student Suparna(102, 2.33);
		Suparna.display();
	
		return 0;
 }