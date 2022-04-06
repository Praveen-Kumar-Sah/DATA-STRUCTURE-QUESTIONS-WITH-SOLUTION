// Program to create a tree and find the find the height
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

    if(tree->left){
        display(tree->left);
    }
    printf("%d-->", tree->data);
    if(tree->right){
        display(tree->right);
    }
}

int heightTree(struct node *tree){

    if(tree == NULL)
        return -1;
    else{
        int lheight = heightTree(tree->left);
        int rheight = heightTree(tree->right);

        if(lheight > rheight)
            return (lheight+1);
        else
            return (rheight+1);
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

    printf("Tree elements are in INORDER : ");
    display(tree);

    printf("\nHeight of the tree is : %d", heightTree(tree));
    
    return 0;
}