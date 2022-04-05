#include <stdio.h>
void main (){
	int n1,n2,n3;
	printf("enter number1 :");
	scanf(" %d" , &n1);
	printf("enter number2 :");
	scanf(" %d" , &n2);
	printf("enter number3 :");
	scanf(" %d" , &n3);
	if (n1>n2 && n1>n3){
		printf("max is : %d" ,n1);
	}
		else if (n2>n1 && n2>n3){
			printf("max is : %d" ,n2);
		}
		else {
			printf("max is : %d",n3);
		}
		
}