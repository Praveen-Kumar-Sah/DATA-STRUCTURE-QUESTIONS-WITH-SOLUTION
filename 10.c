// Quick Sort in array
#include<stdio.h>

void QuickSort(int arr[], int low, int high){

    if(low >= high)
        return;
    
    int start = low;
    int end = high;
    int mid = start + (end - start) / 2;
    int pivot = arr[mid];

    while(start <= end){
        while(arr[start] < pivot){
            start++;
        }
        while(arr[end] > pivot){
            end--;
        }

        if(start <= end){
            int tmp = arr[start];
            arr[start] = arr[end];
            arr[end] = tmp;
            start++;
            end--;
        }
    }

    // calling recursion
    QuickSort(arr, low, end);
    QuickSort(arr, start, high);
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
    QuickSort(arr, 0, size-1);
    printf("\nAfter Sorting the array : ");
    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}