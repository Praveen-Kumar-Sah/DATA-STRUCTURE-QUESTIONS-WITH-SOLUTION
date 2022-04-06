// Booble sort in array
#include<stdio.h>

// sort
void bubbleSort(int arr[], int n){

    int counter=1, i;
    while(counter < n){
        for(i=0; i<n-counter; i++){
            if(arr[i] > arr[i+1]){
                int tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }
        }
        counter++;
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
    bubbleSort(arr, size);
    printf("\nAfter Sorting the array : ");
    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}