// deletion a Node at the certain position in the Singly Linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void delAtPos(struct node *head, int pos){

    struct node *current = head;
    struct node *previous = head;
    if(head == NULL){
        printf("The list is empty !");
    }
    else if(head->link == NULL){
        head = current->link;
        free(current);
        current = NULL;
    }
    else{
        while(pos != 1){
            previous = current;
            current = current->link;
            pos--;
        }
        previous->link = current->link;
        free(current);
        current = NULL;
    }
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
    int pos;
    printf("\nEnter the position where you want to place the new value : ");
    scanf("%d", &pos);

    // calling the function    
    delAtPos(head, pos);
    
    ptr2 = head;
    printf("The data in the List after deletion : ");
    while(ptr2 != NULL){
        printf("%d ", ptr2->data);
        ptr2 = ptr2->link;
    }

    return 0;
}