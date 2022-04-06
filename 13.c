// Heap Sort in array
#include<stdio.h>

// sort
void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void heapify(int arr[], int n, int i){

    int larger = i;
    int left = 2*i+1;
    int right = 2*i+2;
    
    if(left < n && arr[left] > arr[larger])
        larger = left;
    if(right < n && arr[right] > arr[larger])
        larger = right;

    // swape
    if(larger != i){
        swap(&arr[i], &arr[larger]);
        heapify(arr, n, larger);
    }
}

void heapSort(int arr[], int n){

    int i;
    for(i=n/2-1; i>=0; i--){
        heapify(arr, n, i);
    }
    for(i=n-1; i>=0; i--){
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
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
    heapSort(arr, size);
    printf("\nAfter Sorting the array : ");
    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}