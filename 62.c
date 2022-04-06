// Stack implementation using linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
}*top = NULL;

int isEmpty(){

    if(top == NULL)
        return 1;
    else
        return 0;
}

void push(int d){

    struct node *newNode = malloc(sizeof(struct node));

    if(newNode == NULL){
        printf("Stack Overflow\n");
        exit(1);
    }
    else{
        newNode->data = d;
        newNode->link = NULL;
        newNode->link = top;
        top = newNode;
    }
}

int pop(){

    if(isEmpty()){
        printf("Stack Underflow\n");
        exit(1);
    }
    else{
        struct node *tmp;
        tmp = top;
        int val = tmp->data;
        top = top->link;
        free(tmp);
        tmp = NULL;

        return val;
    }
}

int peek(){

    if(isEmpty()){
        printf("Stack Underflow\n");
        exit(1);
    }

    return top->data;
}

void display(){

   struct node *tmp = top;
   while(tmp){
       printf("%d ", tmp->data);
       tmp = tmp->link;       
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