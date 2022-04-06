// Program to create a tree and display it in PREORDR
#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data){

    struct node *tree = (struct node*)malloc(sizeof(struct node));
    tree->data = data;
    tree->left = NULL;
    tree->right = NULL;

    return tree;
}

void display(struct node *tree){

    printf("%d-->", tree->data);
    if(tree->left){
        display(tree->left);
    }
    if(tree->right){
        display(tree->right);
    }
}

int main(){

    struct node *tree;
    tree = newNode(1);
    tree->left = newNode(2);
    tree->right = newNode(3);
    tree->left->left = newNode(4);
    tree->left->right = newNode(5);
    tree->right->left = newNode(6);
    tree->right->right = newNode(7);

    // calling function
    printf("Tree elements are in PREORDER : ");
    display(tree);

    return 0;
}