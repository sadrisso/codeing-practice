#include<iostream>
using namespace std;

	class shape{
		public:
		virtual int getArea()=0;
		
		void setWidth(int w){
			width=w;
			}
		
		void setHeigth(int h){
			heigth=h;
			}
			
		protected:
		int width;
		int heigth;
};

	class triangle : public shape{
		public:
		int getArea(){
			return (width*heigth);
			}
};

	class rectangle : public shape{
		public:
		int getArea(){
			return (width*heigth)/2;
			}
};

	int main(){
		rectangle rect;
		triangle tri;
		
		rect.setWidth(5);
		rect.setHeigth(7);
		cout<<" Rectangle area: "<<rect.getArea()<<endl;
		
		tri.setWidth(5);
		tri.setHeigth(5);
		cout<<" Triangle area: "<<tri.getArea();
		
	
	return 0;
}