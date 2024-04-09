// creat a c program to find the smallest element  in an 1D array

#include <stdio.h>

int main() {
    int arr[100], n, i;
    
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int smallest = arr[0];
    
    // find the smallest element
    for(i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    
    // Print the smallest element
    printf("The smallest element in the array is: %d\n", smallest);
    
    return 0;
}

