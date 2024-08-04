#include <stdio.h>
#include <stdlib.h>

#define  MAX 4
int stack_arry[MAX];

int main(){

    int choice, data;

    while (1) {
        // Display menu
        printf("Choices\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print all the elements of stack\n");
        printf("4. Print the top element of the stack\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                
                push();
                break;

            case 2:
                pop();
                break;
            case 3:
                print();
                break;


        }
        return  0;

    }}