#include<iostream>
using namespace std;
	
	class person{
		public:
			void display(){
				cout<<"I am a person"<<endl;
	 		}
};
		
	class student : public person{
		public:
			void display2(){
				cout<<"I am a student"<<endl;
			}
};

	class teacher : public person{
		public:
			void display3(){
				cout<<"I am a teacher"<<endl;
			}
};
	
	int main(){
		student s;
		s.display2();
		
		person p;
		p.display();
		
		teacher t;
		t.display3();
		
		
	return 0;
}