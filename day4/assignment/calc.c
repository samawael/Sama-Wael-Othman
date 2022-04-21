#include <stdio.h>
void add(int a, int b);
void sub(int a, int b);
void mult(int a, int b);
void devide(int a, int b);
void and(int a, int b);
void or(int a, int b);
void xor(int a, int b);
void not(int a);
void remind(int a,int b);
void decreamnt(int a);
void increamnt(int a);

void main(){
  int a,b;
  int id;
  printf("Enter your operation id :");
  scanf("%d", &id);

switch(id){
  case 1 :
  printf("enter the two num:");
  scanf("%d %d",&a,&b);
  add(a,b);
  break;
  case 2 : 
  printf("enter the two num:");
  scanf("%d %d",&a,&b);
  sub(a,b);
  break;
  case 3 :
  printf("enter the two num:");
  scanf("%d %d",&a,&b);
  mult(a,b);
  break;
  case 4 :
    printf("enter the two num:");
  scanf("%d %d",&a,&b);  
  devide(a,b);
  break;
  case 5 :
    printf("enter the two num:");
  scanf("%d %d",&a,&b);  
  and(a,b);
  break;
  case 6 :
    printf("enter the two num:");
  scanf("%d %d",&a,&b);  
  or(a,b);
  break;
  case 7 :
    printf("enter the num:");
  scanf("%d",&a);  
  not(a);
  break;
  case 8 :
    printf("enter the two num:");
  scanf("%d %d",&a,&b);  
  xor(a,b);
  break;
  case 9 :
    printf("enter two num:");
  scanf("%d %d",&a,&b);  
  remind(a,b);
  break;
  case 10 :
    printf("enter the num:");
  scanf("%d",&a);  
  increamnt(a);
  break;
  case 11:
   printf("enter the num:");
  scanf("%d",&a);  
  decreamnt(a);
    default:printf("your enter wrong choice");
}  
}
void add(int a, int b){
  printf("%d + %d = %d",a,b,(a+b));
}
void sub(int a, int b){
  printf("%d - %d = %d",a,b,(a-b));
}
void mult(int a, int b){
  printf("%d * %d = %d",a,b,(a*b));
}
void devide(int a, int b){
  if(b==0){
    printf("number cannot be devided by 0");
  }else{
  printf("%d / %d = %d",a,b,(a/b));
}}
void and(int a, int b){
  printf("%d & %d = %d",a,b,(a&&b));
}
void or(int a, int b){
  printf("%d | %d = %d",a,b,(a||b));
}
void xor(int a, int b){
  printf("%d ^ %d = %d",a,b,(a^b));
}  
void not(int a){
  printf("%d ",(!a));
}
void increamnt(int a){
  printf("%d + 1 = %d",a,(a+1));
}
void decreamnt(int a){
  printf("%d - 1 = %d",a,(a-1));
}
void remind(int a,int b){
	if(a%b !=0){
	printf("the reminder is : %i" , a%b);
	}
	else 
		printf("the reminder =0");
}