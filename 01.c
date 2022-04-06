// Write a Program to Display an Array
#include<stdio.h>

void Array(int arr[], int n){

    int i;
    printf("Enter the elements in the array : ");
    for(i=1; i<=n; i++){
        scanf("%d", &arr[i]);
    }
}

void Display(int arr[], int n){

    int i;
    printf("The Original Array is : ");
    for(i=1; i<=n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){

    int i, size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    
    // calling Array function
    int arr[size];
    Array(arr, size);
    Display(arr, size);

    return 0;
}