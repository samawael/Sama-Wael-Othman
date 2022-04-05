#include <stdio.h>
void main (){
	int x,i;
	printf("enter the result of 3*4: ");
	scanf(" %d" , &x);
	while(x !=12){
		printf("not correct .please try again :");
		scanf(" %d", &x);
		i++;
	}
	printf("thank you ");

}