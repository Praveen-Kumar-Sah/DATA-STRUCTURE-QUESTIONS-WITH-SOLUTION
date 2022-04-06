// Write a program to insert a node at the end in doubly circular linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *addToEmpty(int d){

    struct node *tmp = malloc(sizeof(struct node));
    tmp->prev = tmp;
    tmp->data = d;
    tmp->next = tmp;

    return tmp;
};

struct node *addAtPos(struct node *tail, int d, int pos){

    struct node *newp = addToEmpty(d);

    if(tail == NULL){
        return newp;
    }

    struct node *tmp = tail->next;
    while(pos > 1){
        tmp = tmp->next;
        pos--;
    }

    newp->prev = tmp;
    newp->next = tmp->next;
    tmp->next->prev = newp;
    tail->next = newp;
    if(tmp == tail){
        tail = tail->next;
    }

    return tail;
};

void display(struct node *tail){

    if(tail == NULL)
        printf("No element in the list");
    else{
        struct node *tmp = tail->next;

        do{
            printf("%d ", tmp->data);
            tmp = tmp->next;

        }while(tmp != tail->next);
    }
}

int main(){

    struct node *tail = NULL;

    // function calling
    tail = addToEmpty(34);
    printf("The list before insertion : ");
    display(tail);

    tail = addAtPos(tail, 56, 1);
    tail = addAtPos(tail, 45, 2);
    printf("\nThe list after insertion : ");
    display(tail);

    return 0;   
}