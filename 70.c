// Program to implement a binary search tree
#include<stdio.h>
#include<stdlib.h>

struct BSTnode{

    int data;
    struct BSTnode *left;
    struct BSTnode *right;
};

struct BSTnode *newNode(int data){

    struct BSTnode *tree = (struct BSTnode*)malloc(sizeof(struct BSTnode));
    tree->data = data;
    tree->left = NULL;
    tree->right = NULL;

    return tree;
}

struct BSTnode *create(struct BSTnode *root, int data){

    if(root == NULL){
        root = newNode(data);
        return root;
    }
    else if(data <= root->data){
        root->left = create(root->left, data);
    }
    else{
        root->right = create(root->right, data);
    }

    return root;
}

void display(struct BSTnode *root){

    if(root->left){
        display(root->left);
    }
    printf("%d-->", root->data);
    if(root->right){
        display(root->right);
    }
}

int main(){

    struct BSTnode *root = NULL;
    root = create(root, 10);
    root = create(root, 20);
    root = create(root, 30);
    root = create(root, 40);
    root = create(root, 50);
    root = create(root, 60);

    printf("The binary search tree in INORDER : ");
    display(root);

    return 0;
}
