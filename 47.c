// // Write a program to insert a node at the end in circular signly linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *addToEmpty(int d){

    struct node *tmp = malloc(sizeof(struct node));
    tmp->data = d;
    tmp->next = tmp;

    return tmp;
};

struct node *addAtEnd(struct node *tail, int d){

    struct node *newp = malloc(sizeof(struct node));
    newp->data = d;
    newp->next = NULL;

    newp->next = tail->next;
    tail->next = newp;
    tail = tail->next;

    return tail;
};

void display(struct node *tail){

    struct node *ptr = tail->next;
    do{
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }while(ptr != tail->next);
}

int main(){

    struct node *tail;
    // calling function
    tail = addToEmpty(34);
    printf("The data in the list before insertion : ");
    display(tail);

    tail = addAtEnd(tail, 45);
    tail = addAtEnd(tail, 56);
    printf("\nThe data in the list after insertion : ");
    display(tail);

    return 0;
}