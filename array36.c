#include<stdio.h>
int main()
{
	int a[100];
	int i,n,data,m;
	printf("enter the length of an array:");
	scanf("%d",&n);
	printf("enter array:\n");
	
	for(i=0;i<n;i++)
	     scanf("%d",&a[i]);
		printf("enter the data for insertion:");
	     scanf("%d",&data);
		printf("enter position for insertion:");
	     scanf("%d",&m);
       
       for(i=n;i>=m;i--)
	a[i]=a[i-1];
	a[m-1]=data;
	printf("inserted array");
       
       for(i=0;i<n;i++)
	printf("\n%d",a[i]);

return 0;
}
	
	
