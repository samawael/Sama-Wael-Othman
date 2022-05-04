#include <stdio.h>
void findmax(int a[], int b[] , int c[]);
void findmin(int a[], int b[] , int c[]);
void main(){
	
   int i,s1=0, s2=0, s3=0,s;
   float avg;
   int passed=0;
   int failed =0;
  
   
   int data1[10]={80,77,50,40,44,88,15,90,99,96};
   int data2[10]={5,10,70,97,20,80,85,90,96,88};
   int data3[10]={78,100,70,50,20,80,85,90,96,88};
  
   for(i=0;i<10;i++){
	   s1=s1+data1[i];
	   s2=s2+data2[i];
	   s3=s3+data3[i];
	   if (data1[i]>=50){
	   passed++;}
	   else failed++;
		  if (data2[i]>=50){
			  passed++;
			  
		  }
		  else failed++;
		  if (data3[i]>=50){
			  passed++;
		  }
		  else 
			  failed++;
	   }
	    s=s1+s2+s3;
	   avg=s/(30);
	 printf("number of passed students :%d\n", passed);
	 printf("number of failed students :%d\n", failed);
   
    findmax(data1,data2,data3);
    findmin(data1,data2,data3);
	 printf("average grade equal : %f" , avg);
	   
   
}

void findmax(int a[], int b[] , int c[]){
	int maxa=a[0];
	int maxb=b[0];
	int maxc=c[0];
	for (int i =1;i<10;i++){
		if (maxa<a[i]){
			maxa=a[i];
			
		}
		 if (maxb<b[i]){
			maxb=b[i];
			
		}
		if (maxc<c[i]){
		maxc=c[i];
	}
	}
	if (maxa>maxb&& maxa>maxc){
		printf(" the highest grade : %d\n" , maxa);
		
	}
	else if (maxb>maxa&& maxb>maxc){
		printf(" the highest grade : %d\n" , maxb);
	}
	else
		printf(" the highest grade : %d\n" , maxc);
}
void findmin(int a[], int b[] , int c[]){
	int mina=a[0];
	int minb=b[0];
	int minc=c[0];
	for (int i =0;i<10;i++){
		if (mina>a[i]){
			mina=a[i];
			
		}
		 if (minb>b[i]){
			minb=b[i];
			
		}
		if (minc>c[i]){
		minc=c[i];
	}
	}
	
	if (mina<minb&& mina<minc){
		printf(" the lowest grade : %d\n" , mina);
		
	}
	else if (minb<mina&& minb<minc){
		printf(" the lowest grade : %d\n" , minb);
	}
	else
		printf(" the lowest grade : %d\n" , minc);
}
	
	
	
	

