#include <stdio.h>
void main(){
	int num[10];
	int s=0;
	int avg = 0;
	int i;
	for(i=0;i<10;i++) {
	printf("please enter num[%d] :",i+1);
	scanf(" %d", &num[i]);
	s=s+num[i];	
	}
	avg=s/i;
	printf(" the summtion equal :%d\n" , s);
	printf("the average equal : %d" , avg);
}
	