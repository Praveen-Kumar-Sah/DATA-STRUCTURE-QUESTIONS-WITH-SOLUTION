// Write a program to insert a node at the begning in doubly circular linked list
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

struct node *addAtBeg(struct node *tail, int d){

    struct node *newp = addToEmpty(d);

    if(tail == NULL){
        return newp;
    }
    else{
        struct node *tmp = tail->next;

        newp->prev = tail;
        newp->next = tmp;
        tmp->prev = newp;
        tail->next = newp;

        return tail;
    }
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

    tail = addAtBeg(tail, 45);
    tail = addAtBeg(tail, 56);
    printf("\nThe list after insertion : ");
    display(tail);

    return 0;   
}