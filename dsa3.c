#include<stdio.h>
int main()
{
    int a=10,**ptr,*ptr1;
    ptr =&a;
    ptr1 = &ptr;
    printf("%d",ptr);
    return 0;
}
