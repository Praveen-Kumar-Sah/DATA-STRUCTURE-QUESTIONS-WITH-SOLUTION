// Passing array of structure as Argument
#include<stdio.h>

struct pointer{
    int x;
    int y;
};

void print(struct pointer arr[]){

    int i;
    for(i=0; i<2; i++)
        printf("%d %d\n", arr[i].x, arr[i].y);
}

int main(){

    struct pointer arr[2] = {{11, 12}, {22, 24}};
    print(arr);
    
    return 0;
}