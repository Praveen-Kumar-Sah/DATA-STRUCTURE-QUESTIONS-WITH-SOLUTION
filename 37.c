// Creating a node and display it using doubly linked list
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

int main(){

    struct node *head = NULL;
    head = addToEmpty(head, 34);
    printf("%d ", head->data);

    return 0;
}