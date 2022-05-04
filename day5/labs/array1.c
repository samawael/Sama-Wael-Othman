#include <stdio.h>
void main(){
	int num[10];
	int i;
	for(i=0;i<10;i++) {
	printf("please enter num[%d] :",i+1);
	scanf(" %d", &num[i]);
		
	}
	for(i=9;i>=0;i--) {
		printf("the value : %d\n",num[i]);
	}
	
}