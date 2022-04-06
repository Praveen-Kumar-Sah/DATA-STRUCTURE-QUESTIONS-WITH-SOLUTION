// Passing pointer to function as an Argument
#include<stdio.h>

struct pointer{
    int x;
    int y;
};

void print(struct pointer *ptr){
    printf("%d %d\n", ptr->x, ptr->y);
}

int main(){

    struct pointer p1 = {12, 13};
    struct pointer p2 = {24, 25};

    print(&p1);
    print(&p2);

    return 0;
}