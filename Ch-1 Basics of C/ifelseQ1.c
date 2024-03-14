#include <stdio.h>

int main()
{
	char ch;
	printf("Enter a character \n");
	scanf("%c", &ch);
	if (ch>=0 && ch<=127)
	{
		printf("ASCII value of %c = %d \n", ch, ch);
	}
	else
	{
		printf("Enter a valid character \n");
	}
	return 0;
}
