// Delete the last Node in the Singly Linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *delAtEnd(struct node *head){

    if(head == NULL){
        printf("The list is empty !");
    }
    else if(head->link == NULL){
        free(head);
        head = NULL;
    }
    else{

        struct node *temp = head;
        struct node *temp2 = head;
        while(temp->link != NULL){
            temp2 = temp;
            temp = temp->link;
        }

        temp2->link = NULL;
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
    head = delAtEnd(head);
    
    ptr2 = head;
    printf("\nThe data in the List after deletion : ");
    while(ptr2 != NULL){
        printf("%d ", ptr2->data);
        ptr2 = ptr2->link;
    }

    return 0;
}