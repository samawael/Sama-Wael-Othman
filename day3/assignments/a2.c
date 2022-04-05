#include <stdio.h>
void main(){
	int id ;
	int i=0;
	int pass;
	printf("please enter your ID: ");
	scanf(" %d", &id);
	switch(id){
		case 1234 :
		printf("enter your password :");
		scanf(" %d", &pass);
		do {
			if(pass!=7788){
			printf("try again :");
			scanf(" %d", &pass);
			i=i+1;}
		
			
			
			else {
				printf("welcome ahmed ");
			i=i+3;
			 	
			} 
			
			}	while(i<=2);
		 if(pass !=7788){
			printf("In correct passord for 3 times .no more tries");}
			
		
			
		
		break;
		case 5678 :
		printf("enter your password :");
		scanf(" %d", &pass);
		do {
			if(pass!=5566){
			printf("try again : ");
			scanf(" %d" , &pass );
			i++;}
			
			
			 
			else {
				printf("wlcome amr");
				i=i+3;
			} 
			
			}	while(i<=2);
		 if(pass !=5566){
				printf("In correct passord for 3 times .no more tries");
			}
		
		break;
		case 9870 :
		printf("enter your password :");
		scanf(" %d", &pass);
		do {
			if(pass!=1122){
			printf("try again : ");
			scanf(" %d" , &pass );
			i++;}
			
			
			
			 
			else {
				printf("welcome wael");
				i=i+3;
			} 
			
			}	while(i<=2);
			
		 if(pass !=1122){
				printf("In correct passord for 3 times .no more tries");
			}
		
		break;
		
		default:
		printf("incorrect id");
		
		
	}	
	
	
	
}
	