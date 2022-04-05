#include <stdio.h>
void main(){
	int id;
	printf("please enter your ID: ");
	scanf(" %d", &id);
	switch(id){
		case 1234:
		printf("welecome ahmed");
		break ;
		case 5678:
		printf("welcome yousif");
		break ;
		case 1145:
		printf("welcome mina");
		break;
		default:
		printf("wrong ID");
	}
}
