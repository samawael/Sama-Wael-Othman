#include <stdio.h>
void main(){
	int num,r,space,sympol;
	printf("enter the the number of pyramid :");
	scanf(" %d", &num);
	for (r=1;r<=num;r++){
		for (space =1;space<=(num-r);space++){
		printf(" ");}
		for(sympol=1;sympol<=((2*r)-1);sympol++){
		printf("*");}
		printf("\n");
	}
	
	
	
	
}
