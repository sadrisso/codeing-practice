#include<stdio.h>

float add(float a,b){
	return a+b;
}
	float subtract(float a,b){
		return a-b;
}
		float multiply(float a,b){
			return a*b;
}
			float divide(float a,b){
				return a/b;
}
				
	int main(){
			float a,b;
			printf("Enter the value of a and b:\n");
			scanf("%f%f",&a,&b);
			float add_result=add(10,10);
			float subtract_result=subtract(10,5);
			float multiply_result=multiply(2,4);
			float devide_result=divide(5,10);
			printf("Add:%f,Subtract:%f,Multiply:%f,Divide:%f\n",add_result,subtract_result,multiply_result,devide_result);
					
	return 0;
}