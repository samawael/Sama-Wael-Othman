#include <stdio.h>
void main () {
	int x;
	int i=1;
	printf("enter the number to display its multiplication table :");
	scanf(" %d" , &x);
	while(x>=i){
		printf(" %d * %d = %d\n" , x,i,(x*i));
		i++;
		
	}
}