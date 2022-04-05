#include <stdio.h>
void main (){
int x;
int sum = 0;
printf("enter the 10 numbers\n");
for (int i=0;i<10;i++){
	printf("number [%d] :",i);
	fflush(stdout);
	scanf(" %d", &x);
	sum=sum+x;
	
}
printf("sum is %d \n", sum);
float average = sum/10;
printf("average is %f\n",average);

}
