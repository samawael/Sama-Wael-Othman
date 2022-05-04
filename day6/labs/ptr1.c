#include <stdio.h>
int sum(int *pa , int *pb);
void main(){
	int x;
	int y ;
	printf("first value is :" );
	scanf(" %d" ,&x);
	
	printf("second value is : ");
	scanf(" %d", &y);
	printf(" the result equal: %d", sum(&x,&y));

	
	
}
int sum(int *pa , int *pb){
		return *pa + *pb ;
	}
