#include <stdio.h>

int main()
{
	int a[100] [100], b[100] [100], s[100] [100];
	int i,j,r,c;
	printf("Please enter number of columns \n");
	scanf("%d", &c); 
	printf("Please enter number of rows \n");
	scanf("%d", &r);
	printf("Enter 1st array \n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter 2nd array \n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	
	//Adding two arrays
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			s[i][j]=a[i][j]+ b[i][j];
		}
	}
	// Displaying resultant array
	printf("The sum of array is \n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("%d",s[i][j]);
		}
	}
	return 0;
}