#include <stdio.h>
int sum(int a, int b, int *s , int *c);
void main(){
	int x;
	int y ;
	int ss,cc;
	printf("first value is :" );
	scanf(" %d" ,&x);
	
	printf("second value is : ");
	scanf(" %d", &y);
	sum(x ,y ,&ss,&cc);
	printf(" the sum result equal: %d\n", ss );
	printf("the result of subtraction :%d" , cc);
}
int sum(int a, int b, int *s , int *c){
		*s=a+b ;
		 *c=a-b;
	}