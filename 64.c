// Queue implementation using Linked List
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
}*front = NULL, *rear = NULL;

int isEmpty(){

    if(front == NULL && rear == NULL)
        return 1;
    else
        return 0;
}

void enQueue(int d){

    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = d;
    newNode->link = NULL;

    if(front == NULL && rear == NULL){
        front = rear = newNode;
    }
    else{
        rear->link = newNode;
        rear = newNode;
    }
}

int deQueue(){

    int val;
    if(isEmpty()){
        printf("Queue Underflow\n");
        exit(1);
    }
    else{
        struct node *tmp = front;
        val = tmp->data;
        front = front->link;
        free(tmp);

        return val;
    }
}

int getFront(){

    if(isEmpty()){
        printf("Queue Underflow\n");
        exit(1);
    }
    else{
        return front->data;
    }
}

int getRear(){

    if(isEmpty()){
        printf("Queue Underflow\n");
        exit(1);
    }
    else{
        return rear->data;
    }
}

void display(){

    struct node *ptr = front;
    if(front == NULL){
        printf("Queue Underflow\n");
    }
    else{
        while(ptr != NULL){
            printf("%d ", ptr->data);
            ptr = ptr->link;
        }
    }
}

int main(){

    int choice, data;

    while(1){
        printf("\n");
        printf("1. ENQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. FRONT\n");
        printf("4. REAR\n");
        printf("5. Display the elements of the stack : \n");
        printf("6. QUIT\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch(choice){

            case 1:
                printf("Enter the element to pushed : ");
                scanf("%d", &data);
                enQueue(data);
                break;

            case 2:
                data = deQueue();
                printf("Deleted element is : %d\n", data);
                break;

            case 3:
                printf("The top most element of stack is : %d", getFront());
                break;

            case 4:
                printf("The top most element of stack is : %d", getRear());
                break;

            case 5:
                printf("The elements in the list : ");
                display();
                break;

            case 6:
                exit(1);

            default:
                printf("Your choice is not matching\n");
        }
    }

    return 0;
}
