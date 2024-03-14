#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter first number \n");
	scanf("%d", &a);
	printf("Enter second number \n");
	scanf("%d", &b);
	printf("Enter third number \n");
	scanf("%d", &c);
	if(a>b && a>c)
	{
		printf("First number (i.e. %d) is largest \n", a);
	}
	else if(b>a && b>c)
	{
		printf("Second number (i.e. %d) is largest \n", b);
	}
	else
	{
		printf("Third number (i.e. %d) is largest \n", c);
	}
	return 0;
}