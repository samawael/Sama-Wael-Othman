#include <stdio.h>
void swap(int n1,int n2);
void main (){
	int num1,num2;
	printf("x before swap =");
	scanf(" %d" , &num1 );
	printf("y before swap =");
	scanf(" %d" , &num2 );
	swap(num1,num2);
	
}
	
	void swap(int n1,int n2){
		n1=n1+n2;
		n2=n1-n2;
		n1=n1-n2;
		printf("x after swap =%d\n",n1);
		printf("y after swap =%d",n2);
		
	}	
	
	
