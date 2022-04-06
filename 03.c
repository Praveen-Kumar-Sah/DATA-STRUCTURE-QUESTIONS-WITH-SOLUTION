// Write a Program to Insert an Element at the END in the Array
#include<stdio.h>

// add at the End
int addAtEnd(int arr[], int n, int data){

    int i;
    for(i=n-1; i>=0; i--){
        arr[i] = arr[i];
    }
    arr[n] = data;
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
    
    addAtEnd(arr, size, data);
    printf("After Insertion at the End : ");
    for(i=0; i<size+1; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}