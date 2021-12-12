

/*
 * Bubble sort Algorithm
 * */

#include <stdio.h>

#define SIZE 9

// prototypes
void bubbleSort(int m[SIZE]);
void swap(int *v1, int *v2);
void printArray(int arr[SIZE]);

// main
int main(){
    
    int arr[SIZE] = {-2, 0, -5, 5, 2, 9, 3, 1, -1};
    
    bubbleSort(arr);
    printArray(arr);

    return 0;
}

// Sorting Algorithm
void bubbleSort(int m[SIZE]){

    int aux = 0;

    for(int step=0; step<SIZE-1; step++){
        for(int i=0; i<(SIZE-1) - step; i++){

            if(m[i] > m[i+1])
                swap(&m[i], &m[i+1]);
        }
    }
}

// swap function
void swap(int *v1, int *v2){
    
    int temp = *v1;

    *v1 = *v2;
    *v2 = temp;
}

void printArray(int arr[SIZE]){

    for(int i= 0; i<SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
