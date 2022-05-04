#include <stdio.h>
void main(){
	int num[10];
	int i;
	

	for(i=0;i<10;i++) {
	printf("please enter num[%d] :",i+1);
	scanf(" %d", &num[i]);
		
	}
	int max=num[0];
	for(i=0;i<10;i++){
		
		if (max < num[i]){
			max=num[i];
		}
	}
	printf("the maxmum value equal :%d\n" , max);
	int min=num[0];
	for(i=0;i<10;i++){
		
		if (min > num[i]){
			min=num[i];
		}
	}
	printf("the minimum value equal :%d" , min);
}