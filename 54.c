// Write a program to search an element in singly circular linked list
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

void display(struct node *tail){

    struct node *ptr = tail->next;
    do{
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }while(ptr != tail->next);
}

int searchElement(struct node *tail, int ele){

    struct node *tmp;
    int index = 0;

    if(tail == NULL)
        return -2;

    tmp = tail->next;
    do{
        if(tmp->data == ele)
            return index;

        tmp = tmp->next;
        index++;

    }while(tmp != tail->next);

    return -1;
}

int main(){

    struct node *tail = NULL;
    int ele;

    tail = addToEmpty(34);
    tail = addAtEnd(tail, 45);
    tail = addAtEnd(tail, 56);
    tail = addAtEnd(tail, 67);
    printf("The elements in the list : ");
    display(tail);

    // searching
    printf("\nEnter the element which you want to search : ");
    scanf("%d", &ele);

    int index = searchElement(tail, ele);
    if(index == -1)
        printf("\nElement is not found");
    else if(index == -2)
        printf("\nLinked list is empty");
    else{
        printf("\nElement %d is at %d index", ele, index);
    }

    return 0;
}