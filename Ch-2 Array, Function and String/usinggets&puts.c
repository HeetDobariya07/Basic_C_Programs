#include <stdio.h>
#include <string.h>
void main()
{
    char S[5];
    printf("Enter your name \n");
    gets(S);
    puts(S);
    // Disadvantage of 'gets' - It takes input beyond the size alloted to string
}

