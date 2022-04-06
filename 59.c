// Write a program to delete the last node from the doubly circular linked list
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

struct node *addAtEnd(struct node *tail, int d){

    struct node *newp = addToEmpty(d);

    if(tail == NULL){
        return newp;
    }
    else{
        struct node *tmp = tail->next;

        newp->next = tmp;
        newp->prev = tail;
        tmp->prev = newp;
        tail->next = newp;
        tmp->prev = newp;
        tail = newp;

        return tail;
    }
};

struct node *delAtEnd(struct node *tail){

    struct node *tmp;
    if(tail == NULL)
        return tail;
    
    if(tmp == tail){
        free(tail);
        tail = NULL;

        return tail;
    }

    tmp = tail->prev;
    tmp->next = tail->next;
    tail->next->prev = tmp;
    free(tail);
    tail = tmp;

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
    printf("The list before deletion : ");
    tail = addAtEnd(tail, 45);
    tail = addAtEnd(tail, 56);
    display(tail);

    tail = delAtEnd(tail);
    printf("\nThe list after deletion : ");
    display(tail);

    return 0;   
}