#include <stdio.h>
 
int main()
{
	float a,b;
	printf("Enter first number \n");
	scanf("%f", &a);
	printf("Enter second number \n");
	scanf("%f", &b);
	float c = a+b;
	float d = a-b;
	float e = a*b;
	float f = a/b;
	printf("Sum of the numbers is %f \n", c);
	printf("Difference of the numbers is %f \n", d);
	printf("Muliplication of the numbers is %f \n", e);
	printf("Division of the numbers is %f \n", f);
	return 0;
}
 
