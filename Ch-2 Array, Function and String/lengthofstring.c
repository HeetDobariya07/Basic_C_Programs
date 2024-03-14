#include <stdio.h>
#include <string.h>
void main()
{
    char S[100];
    printf("Enter a string \n");
    gets(S);
    int n=0;
    while(S[n]!='\0')
    {
        n++;
    }
    printf("Length of the string is %d \n",n);
}

