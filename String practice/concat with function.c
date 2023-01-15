#include<stdio.h>
int main(){
	char str1[100];
	char str2[100];
	
	printf("Enter your string\n");
	gets(str1,str2);
	
	strcat(str1,str2);
	
	printf("Concated string = %s\n", str1);
	
	return 0;
	}