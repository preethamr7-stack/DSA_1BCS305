#include<stdio.h>
void odd()
{
    int i=0;
    do
    {
        if (i%2!=0)
        {
            printf("Odd : %d\n", i);
        }
    i++;    
    }while (i<5);
}

int main()
{
    int i=0,n=5;
    odd();
    return 0;
}
