// Delete the first Node in the Singly Linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *delAtBeg(struct node *head){

    if(head == NULL){
        printf("The list is empty !");
    }
    else{
        struct node *temp = head;
        head = head->link;
        free(temp);
        temp = NULL;
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
    printf("The data in the List before insertion : ");
    while(ptr2 != NULL){
        printf("%d ", ptr2->data);
        ptr2 = ptr2->link;
    }
    
    // calling the function    
    head = delAtBeg(head);
    
    ptr2 = head;
    printf("\nThe data in the List after deletion : ");
    while(ptr2 != NULL){
        printf("%d ", ptr2->data);
        ptr2 = ptr2->link;
    }

    return 0;
}