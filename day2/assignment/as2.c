#include <stdio.h>
void main(){
	int id ;
	int pass;
	printf("please enter your ID: ");
	scanf(" %d", &id);
	switch(id){
		case 1000133 :
		printf("enter your password :");
		scanf(" %d", &pass);
		if (pass==4444){
			printf("SAMA_WAEL");
		}
		else {
			printf("incorrect password");
		}
		break;
		default:
		printf("incorrect id");
	}
}

		