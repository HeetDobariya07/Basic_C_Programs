#include<stdio.h>
#include<stdio.h>
void main()
{
    // For String
    char S1[100],S2[100];
    printf("Enter a string \n");
    gets(S1);
    strcpy(S2,S1);
    strrev(S2);
    if(strcmp(S1,S2)==0)
    {
        printf("Entered string is palindromic \n");
    }
    else
    {
        printf("Entered string is not palindromic \n");
    }
    // For Numbers
    char S3[100],S4[100];
    printf("Enter a integer \n");
    gets(S3);
    strcpy(S4,S3);
    strrev(S4);
    if(strcmp(S3,S4)==0)
    {
        printf("Entered number is palindromic \n");
    }
    else
    {
        printf("Entered number is not palindromic \n");
    }
}
