#include <stdio.h>
 
int main()
{
	char op;
	float a,b;
	printf("Enter a operator (+, -, *, /) : \n");
	scanf("%c", &op);
	printf("Enter two numbers (operands) \n");
	scanf("%f %f", &a, &b);
	switch(op)
	{
		case '+' :
		printf("%.2f+%.2f=%.2f" ,a ,b ,a+b);
		break;
		case '-' :
		printf("%.2f-%.2f=%.2f" ,a ,b ,a-b);
		break;
		case '*' :
		printf("%.2f*%.2f=%.2f" ,a ,b ,a*b);
		break;
		case '/' :
		printf("%.2f/%.2f=%.2f" ,a ,b ,a/b);
		break;
		default :
		printf("Error! Enter correct operator \n");
	}
	return 0;
}
 
