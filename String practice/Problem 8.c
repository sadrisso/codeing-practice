#include<stdio.h>
int main(){
	
	char str[]="Hello World";
	int i,length=0;
	
	while(str[i]!='\0'){
		i++;
		length++;
	}
	
		printf("Length is: %d\n", length);
		return 0;
		}