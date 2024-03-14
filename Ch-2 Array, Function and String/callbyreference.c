#include <stdio.h>
void swap(int *a,int *b);
void main()
{
    int a=10, b=20;
    printf("Numbers before swap is %d %d \n",a,b);
    swap(&a,&b);
    printf("Numbers after swap is %d %d \n",a,b);
}
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("Numbers after swap is %d %d \n",*a,*b);
}

