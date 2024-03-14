#include <stdio.h>

int main()
{
	int a[100][100], b[100][100], multi[100][100];
	int i,j,r,c,k;
	printf("Please enter number of columns:");
	scanf("%d", &c); 
	printf("Please enter number of rows:");
	scanf("%d", &r);
	printf("Enter 1st array: \n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter 2nd array: \n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	
	//Multiplying two arrays
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			multi[i][j]=0; 
			for(k=0;k<c;k++)
			{
			multi[i][j]=multi[i][j] + a[i][j]*b[i][j];
			}
		}
	}
	// Displaying resultant array
	printf("The multiplication of array is: \n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("%d ",multi[i][j]);
		}
		printf("\n");
	}
	return 0;
}
 
