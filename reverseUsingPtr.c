#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; // initialize the array
    int *ptr1, *ptr2, temp;
    
    printf("Original array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
    ptr1 = arr; // point to first element of array
    ptr2 = arr + 4; // point to last element of array
    
    while (ptr1 < ptr2) { // loop to swap elements
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2--;
    }
    
    printf("\nReversed array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
