#include<stdio.h>
int main(){
	FILE *fp;
	fp=fopen("file.txt","r");
	
	int c;
	c=fgetc(fp);
	printf("The char is : %c\n",c);
	
	char arr[199];
	fscanf(fp,"%s",arr);
	printf("The data in arr is:%s",arr);
	
	char buff[12];
	fgets(buff,3,fp);
	printf("The data in buffer is:%s\n",buff);
	
	fclose(fp);
	return 0;}