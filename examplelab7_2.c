#include<stdio.h>

int main(){
    
    int arr2D[2][5] = {{1,2,3,4,5},
                     {6,7,8,9,10}};

    int row = sizeof(arr2D)/sizeof(arr2D[0]);
    int col = sizeof(arr2D)/sizeof(arr2D[0][0]); 

    printf("Size of 2D array: %llu\n", sizeof(arr2D)); //2 arry x 4 bytes x 5 elements = 40 bytes
    printf("Size of 1D array: %llu\n", sizeof(arr2D[0])); //2 arry x 4 bytes x 5 elements = 40 bytes
    printf("Size of 1D array: %llu\n", sizeof(arr2D[0][0])); //2 arry x 4 bytes x 5 elements = 40 bytes
    printf("Row: %d", row);
    printf("Column: %d", col);

    return(0);
}