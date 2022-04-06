// Insertion sort in Array
#include<stdio.h>

// sort
void insertionSort(int arr[], int n){

    int i, j, current;
    for(i=1; i<n; i++){
        current = arr[i];
        j = i-1;
        while(arr[j] > current && j >= 0){
            arr[j+1] = arr[j];               
            j--;
        }
        arr[j+1] = current;
    }
}

int main(){

    int i, size;
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

    // calling function
    insertionSort(arr, size);
    printf("\nAfter Sorting the array : ");
    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}