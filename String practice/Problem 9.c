#include<stdio.h>
int main(){
	
	char str[]="Hello world";
	int i=0;
	
	while(str[i]!='\0'){
		if(str[i]==65 && str[i]==97)
		printf("Found");
		
		i++;
		break;
		}
	
	return 0;
	}