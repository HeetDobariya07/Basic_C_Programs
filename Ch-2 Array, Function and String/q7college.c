#include <stdio.h>
 
int main()
{
	int a[30];
	int i,j,n,temp;
	printf("Enter the no. of numbers to sort \n");
	scanf("%d", &n);
	printf("Enter the numbers \n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	// Ascending Order
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n; j++)
		{
			if (a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Sorting in ascending order is \n");
	for (i=0;i<n;i++)
	{
		printf("%d\n", a[i]);
	}
	
	// Descending Order
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n; j++)
		{
			if (a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Sorting in descending order is \n");
	for (i=0;i<n;i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;	
}
 
