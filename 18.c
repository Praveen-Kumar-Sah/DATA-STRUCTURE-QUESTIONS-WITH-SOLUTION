// Write a Program using Free Built in function
#include<stdio.h>
#include<stdlib.h>

int *input(int n){

    int i;

    int *ptr = (int *)malloc(n*sizeof(int));

    if(ptr == NULL){
        printf("Memory is not Availabel");
        exit(1);
    }

    printf("Enter  Elements in array : ");
    for(i=0; i<n; i++){
        scanf("%d", ptr+i);
    }

    return ptr;
}

int main(){

    int i, sum=0, n;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    int *ptr = input(n);
    for(i=0; i<n; i++){
        sum = sum + *(ptr+i);
    }
    printf("sum is = %d", sum);
    free(ptr);
    ptr = NULL;

    return 0;
}