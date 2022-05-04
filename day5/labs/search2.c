#include <stdio.h>
void main(){
		int num[10];
	int i,x;
	int low,up,mid;
	int found=0;
	for(i=0;i<10;i++) {
	printf("please enter num[%d] :",i+1);
	scanf(" %d", &num[i]);
		
	}
	printf("enter the value you search");
	scanf(" %d" , &x);
	/*search for x in array .binary search*/
	low=0;
	up=9;
	do{
	mid=(low+up)/2;
	if (x==num[mid]){
		printf("value found");
		break;
	}
	else if (x>num[mid]){
		low=mid+1;
	}
	else {
		up=mid-1;
	}
		
		
		
	}while (low<up);
		
	if (low>up){
		printf("not exist");
	}
}