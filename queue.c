#include<stdio.h>
#include <stdlib.h>
#define MAX 10
int q[MAX];
int rear=-1,front=0,choice;

void Enqueue();
void Dequeue(){
    if(front==-1 || front>rear){
        printf("cannot delete elements\n");
        return;
    }
    else {
        front++;
    }
    printf("element %d deleted\n", q[front-1]);
}
void display(){
    if(front==-1 || front>rear){
        printf("no elements to display\n");
        return;
    }else {
        for(int i=front; i<=rear; i++)
            printf("%d \n",q[i]);
    }
}

int main(){
    do {
        printf("queue operations: Choose the operations to perform : \n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1: Enqueue(); break;
            case 2: Dequeue(); break;
            case 3: display(); break;
            case 4: printf("Exiting the program...\n");  exit(0);
            default : printf("Invalid choice!! enter the valid choice!\n");
        }
    }while (choice<=4);
}

void Enqueue(){
    int item;
    if(rear==MAX-1){
        printf("Queue is full!!");
        return;
    }
    else {
    printf("Enter the element:");
    scanf("%d",&item);
    rear++;
    q[rear] = item;
    }
    printf(" %d added\n", item);
}

