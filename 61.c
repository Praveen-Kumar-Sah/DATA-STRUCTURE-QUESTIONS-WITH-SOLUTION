// Stack implementation using Array
#include<stdio.h>
#include<stdlib.h>

#define MAX 4
int stackArray[MAX];
int top = -1;

int isFull(){

    if(top == MAX-1)
        return 1;
    else
        return 0;
}

int isEmpty(){

    if(top == -1)
        return 1;
    else
        return 0;
}

void push(int data){

    if(isFull()){
        printf("Stack Overflow\n");
    }
    else{
        top = top+1;
        stackArray[top] = data;
    }
}

int pop(){

    int val;
    if(isEmpty()){
        printf("Stack Underflow\n");
        exit(1);
    }
    else{
        val = stackArray[top];
        top = top - 1;
        return val;
    }
}

int peek(){

    if(isEmpty()){
        printf("Stack Underflow\n");
        exit(1);
    }

    return stackArray[top];
}

void display(){

    int i;
    if(top == -1){
        printf("Stack Underflow\n");
    }
    else{
        for(i=top; i>=0; i--){
            printf("%d ", stackArray[i]);
        }
    }
}

int main(){

    int choice, data;

    while(1){
        printf("\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. PEEK\n");
        printf("4. Display the elements of the stack : \n");
        printf("5. QUIT\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch(choice){

            case 1:
                printf("Enter the element to pushed : ");
                scanf("%d", &data);
                push(data);
                break;

            case 2:
                data = pop();
                printf("Deleted element is : %d\n", data);
                break;

            case 3:
                printf("The top most element of stack is : %d", peek());
                break;

            case 4:
                printf("The elements in the list : ");
                display();
                break;

            case 5:
                exit(1);

            default:
                printf("Your choice is not matching\n");
        }
    }

    return 0;
}