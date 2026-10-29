// array size change by using pointers,realloc and malloc
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = malloc(10*sizeof(int));
    if(ptr!=NULL){
        printf("memory allocated successfully:");
        ptr = realloc(ptr, 10*sizeof(int));
        if(ptr!=NULL){
            printf("memory reallocated successfully:");
        }
    }
    ptr[0]=5;
    ptr[21]= 30;
    printf("ptr = %d\n",ptr[21]);
}