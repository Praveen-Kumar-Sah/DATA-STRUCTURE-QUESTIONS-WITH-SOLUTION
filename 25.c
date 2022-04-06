// Return a pointer to structure from the function
#include<stdio.h>
#include<stdlib.h>

struct pointer{
    int x;
    int y;
};

struct pointer *func(int a, int b){
    
    struct pointer *ptr = malloc(sizeof(struct pointer));

    ptr->x = a;
    ptr->y = b;

    return ptr;
};

void print(struct pointer *ptr){

    printf("%d %d\n", ptr->x, ptr->y);
}

int main(){

    struct pointer *ptr1, *ptr2;
    ptr1 = func(12, 13);
    ptr2 = func(24, 25);

    print(ptr1);
    print(ptr2);

    free(ptr1);
    free(ptr2);

    return 0;
}