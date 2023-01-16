#include<stdio.h>
int main(){
	int arr[]={1,1,1,1,2,2,2,3,3,4,4};
	int arrSize= sizeof arr[0]/sizeof arr;
	int min = 0;
	
	for(int i=0; i<arrSize; i++){
		if(arr[i]<2 && arr[i]>-1){
			min=arr[i];
		}
			}
			if(min<2 && min>-1){
				printf("Between 0 and 1");
				}
			
			
			return 0;
			}