#include<stdio.h>
int main(){
	
	char str[10];
	printf("Enter the value: ");
	gets(str);
	
	int i,len=0;
	
	while(str[i]!='\0'){
		i++;
		len++;
		}
		
		if(len%2==0){
			printf("You entered an even string");
			}
			
			return 0;
			}