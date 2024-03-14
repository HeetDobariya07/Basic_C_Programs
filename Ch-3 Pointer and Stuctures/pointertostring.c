#include<stdio.h>
#include<string.h>
void main()
{
    char *S1[3]={"ABC","XYZ","PQR"};
    int i;
    for(i=0;i<3;i++)
    {
        printf("%s \n", S1[i]);
        printf("%p \n", S1[i]);
    }
}
