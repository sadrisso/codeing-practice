#include<iostream>
using namespace std;
	
	class person{
		public:
			string name;
			int age;
		
		void display1(){
			cout<< name << endl;
			cout<< age << endl;
		}
};

	class student : public person{
		public:
			int id;
		void display2(){
			cout<< id << endl;
			display1();
		}
};

	int main(){
		student s1;
		s1.name="Drisso";
		s1.age=21;
		s1.id=100;
		s1.display2();
		
	return 0;
}