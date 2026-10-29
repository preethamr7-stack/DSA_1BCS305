#include<stdio.h>
typedef struct
{
    int rno;
    char name[15];
    float cgpa;
}student;
int main()
{
 student s[10];
for(int i=0;i<10; i++)
{
    printf("enter the student name:");
    scanf("%s", s[i].name);
    printf("Roll number:");
    scanf("%d",&s[i].rno);
    printf("CGPA: ");
    scanf("%f", &s[i].cgpa);
    printf("rno: %d \n Name: %s \n CGPA: %f ", s[i].rno,s[i].name,s[i].cgpa);
}
return 0;
}



