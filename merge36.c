#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[100],b[100];
	int n1,n2,i,j,total,size=0,temp;
	printf("size of two array:");
	scanf("\n%d \n%d",&n1,&n2);
	printf("1st array:");
	for(i=0;i<n1;i++)
	scanf("%d",&a[i]);
	
	printf("2nd array:");
	for(i=0;i<n2;i++)
	scanf("%d",&b[i]);
	
	total=n1+n2;

	
	 
	for(i=0;i<n2;i++){
	a[n1 + i] = b[i];
	}
	
	
	for(i=0;i<total;i++){
	 for(j=0;j<total-1;j++)
	  {
	   if(a[j]>a[j+1])
	   {
	   temp=a[j];
	   a[j]=a[j+1];
	   a[j+1]=temp;
	   }
	  } 
	  }
        
        printf("after sorting\n");
	for(i=0;i<total;i++)
	{
	printf("%d",a[i]);
	}
	
return 0;
}
