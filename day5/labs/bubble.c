#include <stdio.h>
#define true 1
#define false 0
void main(){
	int num[10];
	int i,sort;
	for(i=0;i<10;i++) {
	printf("please enter num[%d] :",i+1);
	scanf(" %d", &num[i]);
		
	}
	do {
		sort=true;
		for (i=0;i<9;i++)
			if (num[i]>num[i+1])
			{
				num[i]=num[i]+num[i+1];
				num[i+1]=num[i]-num[i+1];
				num[i]=num[i]-num[i+1];
				sort =false ;
			}
		
		
		
	}while(sort==0);
	for(i=0;i<10;i++) {
	
	printf("value(%d) after sorting : %d\n ",i+1, num[i]);
	}
	
}
