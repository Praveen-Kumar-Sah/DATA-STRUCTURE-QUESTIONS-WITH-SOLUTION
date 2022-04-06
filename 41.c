// Write a program to delete the element from the begning
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

struct node *addAtEnd(struct node *head, int d){

    struct node *tmp, *tp;
    tmp = malloc(sizeof(struct node));
    tmp->prev = NULL;
    tmp->data = d;
    tmp->next = NULL;

    tp = head;
    while(tp->next != NULL){
        tp = tp->next;
    }
    tp->next = tmp;
    tmp->prev = tp;

    return head;
};

struct node *delAtBeg(struct node *head){

    struct node *tmp = head;
    head = head->next;
    free(tmp);
    tmp = NULL;
    head->prev = NULL;

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

    display(head);

    head = addToEmpty(head, 34);
    head = addAtEnd(head, 25);
    head = addAtEnd(head, 56);

    printf("\nThe list before deletion : ");
    display(head);

    // calling deletion
    head = delAtBeg(head);
    printf("\nThe list after deletion : ");
    display(head);

    return 0;
}