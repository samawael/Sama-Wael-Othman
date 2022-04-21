#include <stdio.h>
int fac(int n);
void main (){
	int num,x;
	printf("please enter the number:");
	scanf(" %d" , &num);
	x=fac(num);
	printf(" the factorial of %d = %d",num,x);
}
	
	int fac(int n){
	if (n==0)
		return(1);
	else
		return(n*fac(n-1));
	}
