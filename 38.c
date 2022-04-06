// Write a program to add an element at the begning
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

struct node *addAtBeg(struct node *head, int d){

    struct node *tmp = malloc(sizeof(struct node));
    tmp->prev = NULL;
    tmp->data = d;
    tmp->next = NULL;

    tmp->next = head;
    head->prev = tmp;
    head = tmp;

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
    head = addAtBeg(head, 45);
    head = addAtBeg(head, 56);
    
    printf("\nThe elements in the list after insertion : ");
    display(head);

    return 0;
}