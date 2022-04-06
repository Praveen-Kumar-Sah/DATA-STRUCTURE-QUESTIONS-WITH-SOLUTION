// Merge Sort in Array
#include<stdio.h>

void merge(int arr[], int s, int e){

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int first[len1];
    int second[len2];

    // copy value
    int i, k = s;
    for(i=0; i<len1; i++){
        first[i] = arr[k++];
    }

    k = mid+1;
    for(i=0; i<len2; i++){
        second[i] = arr[k++];
    }

    // merge 2 sorted array
    int index1 = 0;
    int index2 = 0;
    k = s;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[k++] = first[index1++];
        }
        else{
            arr[k++] = second[index2++];
        }
    }

    while(index1 < len1){
        arr[k++] = first[index1++];
    }
    while(index2 < len2){
        arr[k++] = second[index2++];
    }
}

void mergeSort(int arr[], int s, int e){

    if(s >= e)
        return;

    int mid = (s+e)/2;
    // sort the left part
    mergeSort(arr, s, mid);

    // sort the right part
    mergeSort(arr, mid+1, e);

    // merge
    merge(arr, s, e);
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
    mergeSort(arr, 0, size-1);
    printf("\nAfter Sorting the array : ");
    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}