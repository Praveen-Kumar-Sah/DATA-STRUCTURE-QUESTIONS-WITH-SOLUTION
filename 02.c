// Write a Program to Insert an Element at the begning in the Array
#include<stdio.h>

// add at the begning
int addAtBeg(int arr[], int n, int data){

    int i;
    for(i=n-1; i>=0; i--){
        arr[i+1] = arr[i];
    }
    arr[0] = data;
    return n+1;

    
}

int main(){

    int size, i, data;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements in the array : ");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    printf("The Original Array is : ");
    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    // insertion
    printf("\nEnter an element : ");
    scanf("%d", &data);
    
    addAtBeg(arr, size, data);
    printf("After Insertion at the begning : ");
    for(i=0; i<size+1; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}