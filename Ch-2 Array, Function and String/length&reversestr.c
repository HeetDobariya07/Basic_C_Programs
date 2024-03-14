#include<stdio.h>
#include<stdio.h>
void main()
{
    char S[100], S1[100], S2[100];
    printf("Enter first string \n");
    gets(S);
    printf("Length of your string is %d \n",strlen(S));
    printf("Reverse of your string is %s \n",strrev(S));
    printf("Lowercase of your string is %s \n",strlwr(S));
    printf("Uppercase of your string is %s \n",strupr(S));
    strcpy(S1,S);
    printf("Copied string is %s \n",S1);
    printf("Enter second string \n");
    gets(S2);
    if (strcmp(S,S2)==0)
    {
        printf("First and Second strings are equal \n");
    }
    else
    {
        printf("First and Second strings are not equal \n");
    }
    printf("Concate of first and second srings is %s \n", strcat(S,S2));
}
