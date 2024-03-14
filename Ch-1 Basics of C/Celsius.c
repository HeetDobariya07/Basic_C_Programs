#include <stdio.h>
 
int main()
{
	float celsius, fahrenheit;
	printf("Enter the temperature in celsius \n");
	scanf("%f", &celsius);
	fahrenheit= (9.0/5 * celsius) + 32;
	printf("Temperature in fahrenheit is %f \n" , fahrenheit);
	
	printf("Enter the temperature in fahrenheit \n");
	scanf("%f", &fahrenheit);
	celsius= 5.0/9 * (fahrenheit - 32);
	printf("Temperature in celsius is %f \n" , celsius);
	return 0;
}
 
