// Binary Search in Array O(log n base 2)
#include<stdio.h>

int binarySearch(int arr[], int n, int key){

    int s=0;
    int e=n;

    while(s <= e){
        int mid = (s+e)/2;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            e = mid-1;
        }
        else{
            s = mid+1;
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

    printf("%d present at %d position", key, binarySearch(arr, size, key));

    return 0;
}