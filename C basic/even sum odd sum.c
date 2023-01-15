#include<stdio.h>
int main(){
	int a[5],i,odd_sum=0,even_sum=0;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		}
		printf("Values of array:\n");
		for(i=0;i<5;i++)
		printf("%d",a[i]);
		if(a[i]%2==0)
		even_sum=even_sum+a[i];
		else
		odd_sum=odd_sum+a[i];
		printf("sum of odd values:%d\n",even_sum);
		printf("sum of even values:%d\n",odd_sum);
		return 0;
		}