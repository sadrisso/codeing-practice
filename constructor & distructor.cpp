#include<iostream>
using namespace std;

	class myFirstClass{
		public:
		myFirstClass(){
			cout<<"Constructor is called"<<endl;
		}
		
		~myFirstClass(){
			cout<<"Destructor is called"<<endl;
		}
		
		void display(){
			cout<<"Display function is called"<<endl;
		}
		
};
	
		int main(){
			
			myFirstClass object;
			object.display();
			
			return 0;
}
		