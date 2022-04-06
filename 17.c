// Write a Program using Realloc built in function
#include<stdio.h>
#include<stdlib.h>

int main(){

    int n, i;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n*sizeof(int));

    if(ptr == NULL){
        printf("Memory is not Availabel");
        exit(1);
    }

    printf("Enter  Elements in array : ");
    for(i=0; i<n; i++){
        scanf("%d", ptr+i);
    }

    printf("The array is : ");
    for(i=0; i<n; i++){
        printf("%d ", *(ptr+i));
    }

    printf("\n");
    // Realloc
    ptr = realloc(ptr, n*sizeof(int));

    if(ptr == NULL){
        printf("Memory is not Available");
        exit(1);
    }

    printf("Enter the new elements in the array : ");
    for(i=0; i<n; i++){
        scanf("%d", ptr+1);
    }

    printf("The array is : ");
    for(i=0; i<n; i++){
        printf("%d ", *(ptr+i));
    }

    return 0;
}