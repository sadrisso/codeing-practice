#include<stdio.h>
int main(){
	
	int arr[]={1,2,3,4,5};
	int arrSize= sizeof arr[0]/sizeof arr;
	int sum = 0;
	
	for(int i=0; i<arrSize; i++){
		if(arr[i]%2==0){
		sum+=arr[i];
		}
		}
		
		if(sum%2==0){
		printf("Even");
		}
		
		return 0;
		}