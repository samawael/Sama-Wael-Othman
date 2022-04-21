#include <stdio.h>
int get_max(int n1,int n2,int n3,int n4);
int get_min(int n1,int n2,int n3,int n4);
void main(){
	int num1,num2,num3,num4;
	printf("enter num1 :");
	scanf(" %d" ,&num1);
	printf("enter num2 :");
	scanf(" %d" ,&num2);
	printf("enter num3 :");
	scanf(" %d" ,&num3);
	printf("enter num4 :");
	scanf(" %d" ,&num4);
	printf("the maxmum number= %d\n" ,get_max(num1,num2,num3,num4));
	printf("the minmum number= %d" ,get_min(num1,num2,num3,num4));
	
}
int get_max(int n1,int n2,int n3,int n4){
	int res;
	if (n1>n2&& n1>n3&&n1>n4){
		res = n1;
	}
		
	else if (n2>n1&&n2>n3&&n2>n4){
	res=n2;}
		else if (n3>n1&&n3>n2&&n3>n4){
			res=n3;
		}
		else 
			res=n4;
		return res;
	
}
int get_min(int n1,int n2,int n3,int n4){
	int res;
	if (n1<n2&& n1<n3&&n1<n4){
		res = n1;
	}
		
	else if (n2<n1&&n2<n3&&n2<n4){
	res=n2;}
		else if (n3<n1&&n3<n2&&n3<n4){
			res=n3;
		}
		else 
			res=n4;
		return res;
	
}
