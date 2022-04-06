// Passing Structure as an Argument
#include<stdio.h>

struct pointer{
    int x;
    int y;
};

void print(struct pointer p){
    printf("%d %d\n", p.x, p.y);
}

int main(){

    struct pointer p1 = {12, 13};
    struct pointer p2 = {16, 17};

    print(p1);
    print(p2);

    return 0;
}