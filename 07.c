// Delete an Element at the specific position in the Array
#include<stdio.h>

// add at the position
void addAtPos(int arr[], int n, int pos){

    int i;
    if(pos >= n+1){
        printf("\nEntered Position is out of range");
    }
    n--;
    for(i=pos-1; i<n; i++){
        arr[i] = arr[i+1];
    }
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

    addAtPos(arr, size, pos);
    printf("After Insertion at the position : ");
    for(i=0; i<size-1; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}