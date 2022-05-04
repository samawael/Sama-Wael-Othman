#include <stdio.h>
#define true 1
#define false 0
void sortt( int a[] ,int n);
void main(){
	int num[10];
	int i;
	for(i=0;i<10;i++) {
	printf("please enter num[%d] :",i+1);
	scanf(" %d", &num[i]);
	}
	sortt(num , 10);

}

void sortt( int a[] , int n){
	int  i,sort;

do {
		sort=true;
		for (i=0;i<n-1;i++)
			if (a[i]>a[i+1])
			{
				a[i]=a[i]+a[i+1];
				a[i+1]=a[i]-a[i+1];
				a[i]=a[i]-a[i+1];
				sort =false ;
			}
		
		
		
	}while(sort==0);
	for(i=0;i<n;i++) {
	
	printf("value(%d) after sorting : %d\n ",i+1, a[i]);
	}
}