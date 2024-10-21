#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;  // Initialize low and high pointers
    
    while (low <= high) {  // Continue while there are elements to search
        int mid = low + (high - low) / 2;  // Calculate the middle index
        
        // Check if the middle element is the target
        if (arr[mid] == target) {
            return mid;  // If found, return the index
        }
        
        // If the middle element is greater than the target, search the left half
        else if (arr[mid] > target) {
            high = mid - 1;
        }
        
        // If the middle element is less than the target, search the right half
        else {
            low = mid + 1;
        }
    }
    
    return -1;  // If not found, return -1
}

int main() {
    int arr[] = {5, 12, 23, 45, 67, 78,100};  // The sorted array
    int target = 45;  // The number to find
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array
    
    // Call the binary search function
    int result = binarySearch(arr, size, target);
    
    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }
    
    return 0;
}
