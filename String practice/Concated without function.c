#include<stdio.h>
#include<stdlib.h>
int main(){
	char str1[50];
	char str2[50];
	int i,j,len=0;
	
	printf("Enter value :) ;
	gets(str1,str2);
	
	while(str1[i]!='\0'){
		i++;
		len++;
		}
		while(str2[i]!='\0'){
			str1[len+j]=str2[j];
			j++;
			}
			printf("String concated with out function = %s\n", str1);
			
			return 0;
			}