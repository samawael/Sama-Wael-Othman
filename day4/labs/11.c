#include <stdio.h>
int get_max(int n1,int n2);
void main(){
	int num1,num2;
	printf("enter num1 :");
	scanf(" %d" ,&num1);
	printf("enter num2 :");
	scanf(" %d" ,&num2);
	printf("the maxmum number= %d" ,get_max(num1,num2));
	
}
int get_max(int n1,int n2){
	int res;
	if (n1>n2){
		res = n1;
	}
		
	else if (n2>n1){
	res=n2;}
		
		return res;
	
}
