#include<stdio.h>
struct Student
{
    int rollno;
    char name[20];
    float marks;
};
struct Student S[3];
void main()
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter the roll number, name and marks respectively of student %d \n",i+1);
        scanf("%d",&S[i].rollno);
        scanf("%s",&S[i].name);
        scanf("%f",&S[i].marks);
    }
    for(i=0;i<3;i++)
    {
        printf("Roll No. - %d \n",S[i].rollno);
        printf("Name - %s \n",S[i].name);
        printf("Marks - %f \n",S[i].marks);
    }
}
