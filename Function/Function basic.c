#include <stdio.h>
int get_sum (int x, int y){
	int sum=x+y;
	return sum;
	}
	void say_hi(){
		printf("HI\n");
		}
		int main(){
			printf("main start\n");
			say_hi();
			int result=get_sum(10,30);
			printf("My sum:%d\n",result);
			return 0;
			}