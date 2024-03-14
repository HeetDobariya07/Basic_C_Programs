#include <stdio.h>
 
int main()
{
	float rupees, dollar;		
	printf("Enter the amount in dollars \n");
	scanf("%f", &dollar);
	rupees = dollar*48;
	printf("Amount in rupees is %f \n", rupees);
	
	float g, kg;
	printf("Enter the weight in grams \n");
	scanf("%f", &g);
	kg = g/1000;
	printf("Weight in kilogram is %f \n", kg);
	
	float kb,mb;
	printf("Enter the size in kilobytes \n");
	scanf("%f", &kb);
	mb = kb/1024;
	printf("Size in megabyte is %f \n", mb);	
	
	return 0;
}
 
