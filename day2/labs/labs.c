#include <stdio.h>
void main(){
	int x;
	printf("please enter the number:");
	scanf(" %d", &x);
	if(x%2==0){
		printf("the number is even");
		
	}
	else
	{
		printf("your number is odd");
	}
}