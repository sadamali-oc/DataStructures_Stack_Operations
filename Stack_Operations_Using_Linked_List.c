#include <stdio.h>
#include <stdlib.h>




struct Node  {
    int data;
    struct Node *Link;
}*top =NULL;



void push(int data){

    struct Node* newNode = (struct Node*)malloc(sizeof (newNode));
    if(newNode==NULL){
        printf("stack overflow");
        exit(1);
    }

    newNode->data=data;
    newNode->Link=NULL;

    newNode->Link =top;
    top=newNode;

}


void print() {
    struct Node *temp;
    temp = top;
    printf("The stack elements are : ");
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->Link;

    }
    printf("\n");

}


int main(){
    int choice, data;

    while (1) {
        // Display menu
        printf("Choices\n");
        printf("1. Push\n");
//        printf("2. Pop\n");
//        printf("3. Print the top element of the stack\n");
        printf("4. Print all the elements of stack\n");

        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to be push : ");
                scanf("%d", &data);
                push(data);
                break;
//
//            case 2:
//                data = pop();
//                printf("Deleted elemet is %d\n", data);
//                break;

//            case 3:
//                data = peek();
//                printf("The top of the element is : %d\n", data);
//
//                break;

            case 4:
                print();
                break;

            case 5:
                exit(1);
            default:
                printf("Wrong choice");
        }


    }
    return  0;

}