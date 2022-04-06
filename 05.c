// Write a Program to Delete the element at the begning in the array
#include<stdio.h>
// delete at the begning
void deleteAtBeg(int arr[], int n){

    int i;
    n--;
    for(i=0; i<n; i++){
        arr[i] = arr[i+1];
    }
}

int main(){

    int size, i;
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

    // deletion
    deleteAtBeg(arr, size);
    printf("\nAfter Deletion at the begning : ");
    for(i=0; i<size-1; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}