// Queue implementation using Array
#include<stdio.h>
#include<stdlib.h>

#define MAX 4
int queueArray[MAX];
int front = -1, rear = -1;

int isFull(){

    if(rear == MAX-1)
        return 1;
    else
        return 0;
}

int isEmpty(){

    if(front == -1 || front > rear)
        return 1;
    else
        return 0;
}

void enQueue(int d){

    if(isFull()){
        printf("Queue Overflow\n");
        exit(1);
    }
    else{
        if(front == -1)
            front = 0;
        rear++;
        queueArray[rear] = d;
    }
}

int deQueue(){

    int val;
    if(isEmpty()){
        printf("Queue Underflow\n");
        exit(1);
    }
    else{
        val = queueArray[front];
        front = front+1;
        return val;
    }
}

int getFront(){

    if(isEmpty()){
        printf("Queue Underflow\n");
        exit(1);
    }
    else{
        return queueArray[front];
    }
}

int getRear(){

    if(isEmpty()){
        printf("Queue Underflow\n");
        exit(1);
    }
    else{
        return queueArray[rear];
    }
}

void display(){

    int i;
    if(front == -1){
        printf("Queue Underflow\n");
    }
    else{
        for(i=front; i<=rear; i++){
            printf("%d ", queueArray[i]);
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