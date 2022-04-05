#include <stdio.h>
void main(){
	int x;
	float salary;
	printf("please enter your working hours:");
	scanf(" %d" , &x);
	salary= 50 * x;
	if(x<40){
		salary=salary-.1*salary;
		
	}
	printf("your salary is: %f",salary);
	}