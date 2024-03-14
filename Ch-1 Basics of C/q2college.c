#include <stdio.h>
 
int main()
{
	int min, sec;
	
	printf("Enter the time in minute \n");
	scanf("%d", &min);
	sec = min*60;
	printf("Time in second is %d \n", sec);
	
	printf("Enter the time in second \n");
	scanf("%d", &sec);
	min = sec/60;
	printf("Time in minute is %d \n", min);
	return 0;
}
 
