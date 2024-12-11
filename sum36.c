#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b,z;
	printf("enter a number:");
	scanf("%d",&a);
	printf("enter a number:");
	scanf("%d",&b);
	printf("enter your choice: \n 1.sum \n 2.sub \n 3.mult \n 4.div \n 5.exit");
	scanf("%d",&z);
	switch(z)
	        {
	          case 1:printf("result =%d",a+b);
	          break;
	          case 2:printf("sub=",a-b);
	          break;
	          }
}
	
	
	
	
