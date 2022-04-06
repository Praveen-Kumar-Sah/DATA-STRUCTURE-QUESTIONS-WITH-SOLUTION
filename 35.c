// Delete the whole Singly Linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *delList(struct node *head){

    struct node *temp = head;
    while(temp != NULL){
        temp = temp->link;
        free(head);
        head = temp;
    }
    return head;
};

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
    printf("The data in the List before deletion : ");
    while(ptr2 != NULL){
        printf("%d ", ptr2->data);
        ptr2 = ptr2->link;
    }
    
    // calling the function    
    head = delList(head);
    
    if(head == NULL){
        printf("\nThe List Deleted succesfully");
    }

    return 0;
}