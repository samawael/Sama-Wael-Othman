#include <stdio.h>
void main(){
		int num[10];
	int i,x;
	int found=0;
	for(i=0;i<10;i++) {
	printf("please enter num[%d] :",i+1);
	scanf(" %d", &num[i]);
		
	}
	
	printf("enter the value you search");
	scanf(" %d" , &x);
	/*search for x in array*/
	
	for(i=0;i<10;i++){
		if (num[i]==x)
		
	found ++;}
			
	if 	(found >0)
	printf("value exist %d times",found);
	else
		printf("value not exist");
	
}