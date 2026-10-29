#include <stdio.h>

typedef struct {
    int r_no;
    char name[50];
} stud;

int main() {
    stud s[2];
    stud *p;
    p = s; // Pointing to the start of the array

    // 1. Reading data using pointers
    for(int i = 0; i < 2; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Enter roll no: ");
        scanf("%d", &(p + i)->r_no);
        printf("Enter name: ");
        scanf("%s", (p + i)->name);
        printf("\n");
    }

    // 2. Printing data using pointers
    printf("--- Student Details ---\n");
    for(int i = 0; i < 2; i++) {
        printf("Student %d - Roll No: %d, Name: %s\n", i + 1, (p + i)->r_no, (p + i)->name);
    }

    return 0;
}