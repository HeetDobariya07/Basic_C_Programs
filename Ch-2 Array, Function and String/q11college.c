#include <stdio.h>
 
int main()
{
	int(term);
	printf("Enter the number of terms of fibonacci series :");
	scanf("%d", &term);
	int fiboarray[term];
	fiboarray[0]=0;
	fiboarray[1]=1;
	int i;
	for(i=2;i<term;i++)
	{
		fiboarray[i]=fiboarray[i-1]+fiboarray[i-2];
	}
	for(i=0;i<term;i++)
	{
		printf("%d \n",fiboarray[i]);
	}
	return 0;
}
 
