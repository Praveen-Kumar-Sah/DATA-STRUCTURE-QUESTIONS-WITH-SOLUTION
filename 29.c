// Insert a Node at the begning in the Singly Linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *addAtBeg(struct node *head, int d){

    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = d;
    ptr->link = NULL;

    ptr->link = head;
    head = ptr;
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

    struct node *ptr2 = head;
    printf("The data in the List before insertion : ");
    while(ptr2 != NULL){
        printf("%d ", ptr2->data);
        ptr2 = ptr2->link;
    }

    // inserting the data
    int data;
    printf("\nEnter a number which you want to insert in the list : ");
    scanf("%d", &data);

    // calling the function
    head = addAtBeg(head, data);

    ptr2 = head;
    printf("The data in the List after insertion : ");
    while(ptr2 != NULL){
        printf("%d ", ptr2->data);
        ptr2 = ptr2->link;
    }

    return 0;
}