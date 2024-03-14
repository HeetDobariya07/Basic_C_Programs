#include <stdio.h>
int fact(int n);
void main()
{
    int n,f;
    printf("Enter a Number \n");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial of %d is %d \n",n,f);
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
