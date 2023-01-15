#include<stdio.h>
int main(){
	char str[100];
	char str2[100];
	
	printf("Enter the value: ");
	gets(str,str2);
	
	strcat(str,str2);
	
	printf(" Concated string : %s\n", str);
	
	return 0;
	}