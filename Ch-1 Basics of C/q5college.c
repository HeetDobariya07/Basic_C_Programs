#include <stdio.h>
#include <math.h>
 
int main()
{
	float p, r, t, si, ci;
	printf("Enter the principal amount (in rupees) \n");
	scanf("%f", &p);
	printf("Enter the rate of interest \n");
	scanf("%f", &r);
	printf("Enter the time interval (in years) \n");
	scanf("%f", &t);
	si = (p*r*t)/100;
	printf("Simple Interest = %f \n", si );
	
	float x, y;
	x=1+r/100;
	y=pow(x,t);
	ci=(p*y)-p;
	printf("Compound Interest = %f \n", ci );
	return 0;
}