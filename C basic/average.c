#include<stdio.h>
int main (){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	float average=(a+b+c)/3.0;
	
	printf("value of a:%d\n",a);
	printf("value of b:%d\n",b);
	printf("value of c:%d\n",c);
	printf("average of a,b,c:%f\n",average);
	return 0;
	}