#include <stdio.h>
int sum(int a, int b); 
int main()
{
	int x,y,z;
	printf("Enter first number \n");
	scanf("%d",&x);
	printf("Enter second number \n");
	scanf("%d",&y);
	z=sum(x,y);
	printf("Sum of two numbers is %d \n",z);
	return 0;	
}
int sum(int a, int b)
{
	int c=a+b;
	return c;
}
 
