#include <stdio.h>
void main(){
	int x =5,y=6,z=7;
	int *p , *q , *r ;
	p=&x;
	q=&y;
	r=&z;
	printf("x = %d\n y= %d\n z= %d\n ",x,y,z);
	printf("p=%d\n q=%d\n r=%d\n",p,q,r);
	printf("*p=%d\n *q=%d\n *r=%d\n",*p,*q,*r);
	printf("===================\n");
	printf("swapping pointers\n");
	r=p;
	p=q;
	q=r;
	printf("x = %d\n y= %d\n z= %d\n ",x,y,z);
	printf("p=%d\n q=%d\n r=%d\n",p,q,r);
	printf("*p=%d\n *q=%d\n *r=%d\n",*p,*q,*r);
}
	
	
	