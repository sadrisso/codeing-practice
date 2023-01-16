#include<stdio.h>
int main(){
	
	int n;
	printf("Enter the value: ");
	scanf(" %d\n", &n);
	
	int arr[n];
	if(n%2==0)
	for(int i=0; i<n; i++){
		arr[i]=2;
		}
		}else{
			for(int i=0; i<n; i++){
				arr[i]=1;
				}
				}
				for(int i=0;i<n; i++){
					printf("%d", arr[i]);
					}
					return 0;
					}