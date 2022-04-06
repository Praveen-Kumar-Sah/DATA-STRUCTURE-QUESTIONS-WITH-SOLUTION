// Write a program to reverse the whole list
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

struct node *reverse(struct node *head){

    struct node *ptr1 = head;
    struct node *ptr2 = ptr1->next;

    ptr1->next = NULL;
    ptr1->prev = ptr2;
    while(ptr2 != NULL){
        ptr2->prev = ptr2->next;
        ptr2->next = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr2->prev;
    }
    head = ptr1;

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
    head = addAtEnd(head, 98);

    printf("\nThe Normal list : ");
    display(head);

    // calling deletion
    head = reverse(head);
    printf("\nThe Reversed list : ");
    display(head);

    return 0;
}