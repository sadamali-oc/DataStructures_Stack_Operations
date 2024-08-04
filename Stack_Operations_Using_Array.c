#include <stdio.h>
#include <stdlib.h>

#define  MAX 4
int stack_arry[MAX];

int top = -1;
int main(){

    int choice, data;

    while (1) {
        // Display menu
        printf("Choices\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print the top element of the stack\n");
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

            case 2:
                data = pop();
                printf("Deleted elemet is %d\n", data);
                break;

            case 3:
                data = peek();
                printf("The top of the element is : %d\n", data);

                break;

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


    int isFull(){
    if(top ==MAX -1){
        return  1;
    }else
        return  0;
}


int isEmpty(){
    if(top == -1){
        return 1;
    } else
        return  0;
}


    int push(int data){
    if(isFull()){
        printf("stack overflow error\n");
        return 0 ;
    }
    top=top +1;
    stack_arry[top]=data;



}

int pop (){
    int value;
    if(isEmpty()){
        printf("stack underflow error");
        exit(1);
    }
    value =stack_arry[top];
    top=top -1;
    return value;
}

int peek(){
    if(isEmpty()){
        printf("stack underflow error");
        exit(1);
    }
    return stack_arry[top];
}


int   print(){
    int i;
    if(isEmpty()){
        printf("stack underflow error");
        return 0 ;
    }
    for(i=top;i>=0;i--){
        printf("\n%d\n", stack_arry[i]);
    }

}


