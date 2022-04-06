// Write a program to delete the node from begning in circular singly linked list
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

struct node *completeList(struct node *tail){

    int i, n, d;
    printf("Enter the size of the list : ");
    scanf("%d", &n);

    if(n == 0){
        return tail;
    }
    else{
        printf("Enter the first element : ");
        scanf("%d", &d);
        tail = addToEmpty(d);
        for(i=0; i<n; i++){
            printf("Enter the elements : ");
            scanf("%d", &d);
            tail = addAtEnd(tail, d);
        }
    }

    return tail;
};

struct node *delAtBeg(struct node *tail){

    if(tail == NULL){
        return tail;
    }
    if(tail->next == tail){
        free(tail);
        tail = NULL;
        return tail;
    }
    else{
        struct node *tmp = tail->next;
        tail->next = tmp->next;
        free(tmp);
        tmp = NULL;

        return tail;
    }
};

void display(struct node *tail){

    struct node *ptr = tail->next;
    do{
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }while(ptr != tail->next);
}

int main(){

    struct node *tail = NULL;

    // calling function
    tail = completeList(tail);
    printf("The list before deletion : ");
    display(tail);

    tail = delAtBeg(tail);
    printf("\nThe list after deletion : ");
    display(tail);

    return 0;
}