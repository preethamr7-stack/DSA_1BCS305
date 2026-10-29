// malloc() -> allocates a block of memory
// calloc() -> allocates and inatilizes memory
// realloc() -> changes an allocated block's size
// free() --> releases allocated memory
// heap memory -> memory in cpu which can contrast and expand
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,*ptr;
    int size;
    scanf("%d",&a);
    ptr= malloc(sizeof(int));
    size = a*sizeof(int);
    if(ptr==NULL)
    {
        printf("memory allocation failed!!");
    }
    else
    {
        printf("%d memory allocation successful", size);
    }
    free(ptr);
    return 0;
}