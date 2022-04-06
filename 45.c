// Write a program to create a node for circular singly linked list
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

int main(){

    struct node *tail;

    // calling function
    tail = addToEmpty(34);

    printf("The data in the list : ");
    printf("%d ", tail->data);

    return 0;
}