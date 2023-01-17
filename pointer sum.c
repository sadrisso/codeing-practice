#include<stdio.h>
int main(){
	
	int x = 10, y = 20;
	int *ptr1, *ptr2;
	
	ptr1 = &x;
	ptr2 = &y;
	
	int sum = *ptr1 + *ptr2;
	printf("%d", sum);
	
	return 0;
	}