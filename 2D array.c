#include<stdio.h>
int main(){
	
	int a[3][3],i,j,sum=0;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &a[i][j]);
			}
			}
			
			for(i=0; i<3; i++){
				for(i=0; i<3; i++){
					printf("%d\n", a[i][j]);
					sum= sum+a[i][j];
					}
					printf("\n");
					}
					
					float average = sum/9.0;
					printf("Average: %f", average);
					
					return 0;
					}