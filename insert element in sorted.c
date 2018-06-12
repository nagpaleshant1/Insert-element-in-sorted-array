#include<stdio.h>
int main()
{
	int n,a[100],i,loc,value;
	printf("Enter no. of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Enter no. to be inserted");
	scanf("%d",&value);
	for(i=0;i<n;i++)
	{
		if(a[i]>=value)
		{
			loc=i;
			break;	
		}	
	}
	printf("\nLocation of no. to be inserted=%d",loc);
	for(i=n-1;i>=loc;i--)
	{
		a[i+1]=a[i];
	}
	a[loc]=value;
	for(i=0;i<=n;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}
	return 0;
}
