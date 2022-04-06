// Return a structure from a function
#include<stdio.h>

struct pointer{
    int x;
    int y;
};

struct pointer edit(struct pointer p){
    p.x++;
    p.y = p.y+5;

    return p;
}

void print(struct pointer p){
    printf("%d %d\n", p.x, p.y);
}

int main(){

    struct pointer p1 = {12, 13};
    struct pointer p2 = {24, 25};

    p1 = edit(p1);
    p2 = edit(p2);

    print(p1);
    print(p2);
    
    return 0;
}