#include<stdio.h>
int main(){
	char str[100]= " My name is 5400 Drisso 56##";
	int i,ch,vowel,consonant, digit,word,other=0;
	
	while((ch=str[i])!='\0'){
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||
		ch=='I'||ch=='O'||ch=='U')
		vowel++;
		else if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
		consonant++;
		else if(ch>='0' && ch<='9')
		digit++;
		else if(ch== '  ')
		word++;
		else
		other ++;
		}
		
		printf("Number of vowel : %d\n", vowel);
		printf("Number of consonant : %d\n", consonant);
		printf("Number of digits : %d\n", digit);
		printf("Number of words : %d\n", word);
		printf("Other materials : %d\n", other);
		
		return 0;
		}