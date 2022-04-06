// Linear Search in Array O(n)
#include<stdio.h>

int linearSearch(int arr[], int n, int key){

    int i;
    for(i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
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
    int key;
    printf("\nEnter the element which you want to search : ");
    scanf("%d", &key);

    printf("%d present at %d position", key, linearSearch(arr, size, key));

    return 0;
}