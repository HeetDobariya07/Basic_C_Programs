#include<stdio.h>
#include<string.h>
void main()
{
    int a[3]={123,145,256};
    int *p,i;
    for(i=0;i<3;i++)
    {
        p=&a[i];
        /* For value of elements */
        printf("%d \n",*p);
        //printf("%d \n",a[i]);
        /* For address of elements */
        printf("%p \n",p);
        //printf("%p \n",&a[i]);
    }
}
