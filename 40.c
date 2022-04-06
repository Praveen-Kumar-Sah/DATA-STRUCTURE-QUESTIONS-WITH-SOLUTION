// Write a program to insert a node at the given position in doubly linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *addToEmpty(struct node *head, int d){

    struct node *tmp = malloc(sizeof(struct node));
    tmp->prev = NULL;
    tmp->data = d;
    tmp->next = NULL;
    head = tmp;

    return head;
};

struct node *addAtPos(struct node *head, int d, int pos){

    struct node *newp = NULL;
    struct node *tmp = head;
    struct node *tmp2 = NULL;

    newp = addToEmpty(newp, d);

    while(pos != 1){
        tmp = tmp->next;
        pos--;
    }

    if(tmp->next == NULL){
        tmp->next = newp;
        newp->prev = tmp;
    }
    else{
        tmp2 = tmp->next;
        tmp->next = newp;
        tmp2->prev = newp;
        newp->next = tmp2;
        newp->prev = tmp;
    }

    return head;
};

void display(struct node *head){

    if(head == NULL){
        printf("The list is empty");
    }

    struct node *ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int main(){

    struct node *head = NULL;
    struct node *ptr;

    display(head);

    head = addToEmpty(head, 34);
    head = addAtPos(head, 25, 1);
    head = addAtPos(head, 36, 2);
    head = addAtPos(head, 56, 1);
     
    printf("\nThe elements in the list after insertion : ");
    display(head);

    return 0;
}