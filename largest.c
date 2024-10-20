//hw6 chp10 question 1
/* 25 points – Save as largest.c
Write a function array_largest() that returns the largest value stored in an array-of-int.
It should take as parameters the name of the array and the size of the array.
Test the main by writing a main() function which calls the array_largest() function
twice, first with an array that contains the values 14,-27,19,56, and 104, and a second time
with an array that contains the values 78, 12, 1015, 738, -14, 12, and 49. After each call, print
the return value from array_largest(). */

#include <stdio.h>

// Function to find the largest element in an array
int array_largest(int *array, int size) {
    // Initialize a variable to hold the largest value, assuming the first element as the largest
    int largest = array[0];

    // Iterate through the array to find the largest value
    for (int i = 1; i < size; i++) {
        // Check if the current element is larger than the current largest value
        if (array[i] > largest) {
            // If the current element is larger, update the largest value
            largest = array[i];
        }
    }

    // Return the largest value found
    return largest;
}

int main() {
    // First array: 14, -27, 19, 56, 104
    int arr1[] = {14, -27, 19, 56, 104};
    // Determine the size of the array by dividing the total size of the array by the size of a single element
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    // Call the array_largest function with the first array and its size, and print the result
    printf("Largest value in arr1: %d\n", array_largest(arr1, size1));

    // Second array: 78, 12, 1015, 738, -14, 12, 49
    int arr2[] = {78, 12, 1015, 738, -14, 12, 49};
    // Determine the size of the second array
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    // Call the array_largest function with the second array and its size, and print the result
    printf("Largest value in arr2: %d\n", array_largest(arr2, size2));

    return 0;
}
