// Insert an Element at the specific position in the Array
#include<stdio.h>

// add at the position
int addAtPos(int arr[], int n, int pos, int data){

    int i;
    for(i=n; i>=pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos-1] = data;
    return n+1;
}

int main(){

    int size, i, data, pos;
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
    printf("\nEnter the position : ");
    scanf("%d", &pos);
    printf("\nEnter an element : ");
    scanf("%d", &data);

    addAtPos(arr, size, pos, data);
    printf("After Insertion at the position : ");
    for(i=0; i<size+1; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}