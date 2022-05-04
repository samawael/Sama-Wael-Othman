#include <stdio.h>
void main(){
	int num[10];
	int sum=0;
	int *ptr;
	int i;
	for(i=0;i<10;i++) {
	printf("please enter num[%d] :",i+1);
	scanf(" %d", &num[i]);
		
	}
	for (ptr=&num[0]; ptr<=&num[9]; ptr++){
		
		sum = sum + *ptr;
		
		
	}
	printf("sum of array is :%d\n", sum);
}