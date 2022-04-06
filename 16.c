// Write a Program using malloc built in function
#include<stdio.h>
#include<stdlib.h>

int main(){

    int n, i;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    int *ptr = malloc(n*sizeof(int));
    
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

    return 0;
}