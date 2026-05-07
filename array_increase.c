// Increase the length of an array by 1 and assign the new element a value of 0 in the start.


#include <stdio.h>

int main() {
    int arr1[5] = {1,2,3,4};


    for (int i = 5; i > 0; i--) 
    {
        arr1[i] = arr1[i-1];
    }
    arr1[0] = 0;

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");


}