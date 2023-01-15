#include<stdio.h>
int main(){
	char str[100]="  Md Shoeb Akter Drisso 62 ";
	int i,capital,small,digit=0;
	
	while(str[i]!='\0'){
		if(str[i]>=65 && str[i]<=90)
		capital++;
		else if (str[i]>=97 && str[i]<=122)
		small++;
		else if (str[i]>=48 && str[i]<=57)
		digit++;
		i++;
		}
		printf("Capital latter : %d\n", capital);
		printf("Small latter : %d\n", small);
		printf("digit is : %d \n", digit);
		return 0;}