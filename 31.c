// Insert a Node at the certain position in the Singly Linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void addAtPos(struct node *head, int d, int pos){

    struct node *ptr = head;
    struct node *ptr2 = malloc(sizeof(struct node));
    ptr2->data = d;
    ptr2->link = NULL;

    pos--;
    while(pos != 1){
        ptr = ptr->link;
        pos--;
    }

    ptr2->link = ptr->link;
    ptr->link = ptr2;
}

int main(){

    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *ptr = malloc(sizeof(struct node)); 
    ptr->data = 48;
    ptr->link = NULL;
    head->link = ptr; // updating the head pointer

    ptr = malloc(sizeof(struct node)); 
    ptr->data = 56;
    ptr->link = NULL;
    head->link->link = ptr;

    struct node *ptr2 = head;
    printf("The data in the List before insertion : ");
    while(ptr2 != NULL){
        printf("%d ", ptr2->data);
        ptr2 = ptr2->link;
    }
    
    // inserting the data
    int data, pos;
    printf("\nEnter the position where you want to place the new value : ");
    scanf("%d", &pos);
    printf("\nEnter a number which you want to insert in the list : ");
    scanf("%d", &data);

    // calling the function    
    addAtPos(head, data, pos);
    
    ptr2 = head;
    printf("The data in the List after insertion : ");
    while(ptr2 != NULL){
        printf("%d ", ptr2->data);
        ptr2 = ptr2->link;
    }

    return 0;
}