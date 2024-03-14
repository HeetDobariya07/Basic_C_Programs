#include <stdio.h>
void main()
{
    int i,n;
    printf("Enter a number \n");
    scanf("%d",&n);
    int f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Factorial is %d \n",f);
}
