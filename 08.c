// Selection sort in array
#include<stdio.h>

// sort
void selectionSort(int arr[], int n){

    int i, j;
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(arr[j] < arr[i]){
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
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
    selectionSort(arr, size);
    printf("\nAfter Sorting the array : ");
    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}