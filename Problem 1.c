#include<stdio.h>
int main(){
	int arr[]={2,3,5,5,6,9,0,5,1};
	int i,times=0;
	while(arr[i]==5){
	times++;
	i++;
	}
	
	printf("5 occurs = %d\n", times);
	
	return 0;
	}