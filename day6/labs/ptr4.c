#include <stdio.h>
int dp(int *ptr1, int *ptr2);
int res=0  ;

void main(){
	int vec1[3]={5,8,7};
	int vec2[3]={4,9,4};
	res=dp(vec1,vec2);
	printf("dot product of 2 vec is %d\n" , res );
}
int dp(int *ptr1, int *ptr2){
	
	for(int i =0;i<3;i++){
		
		res  +=  (  *( ptr1+i) * *( ptr2+i) );
		
	}
	
	
}