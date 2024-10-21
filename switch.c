 #include <stdio.h>

int main() {
    int arr[100], n, choice, i, max, sum = 0;
    float average;

    // Input array size and t
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Menu for array operations
    printf("\nChoose an operation:\n");
    printf("1. Find the Maximum Element\n");
    printf("2. Find the Sum of all Elements\n");
    printf("3. Reverse the Array Elements\n");
    printf("4. Find the Average of Array Elements\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            // Find Maximum Element
            max = arr[0];
            for(i = 1; i < n; i++) {
                if(arr[i] > max) {
                    max = arr[i];
                }
            }
            printf("The maximum element is: %d\n", max);
            break;

        case 2:
            // Find Sum of all Elements
            sum = 0;
            for(i = 0; i < n; i++) {
                sum += arr[i];
            }
            printf("The sum of all elements is: %d\n", sum);
            break;

        case 3:
            // Reverse the Array Elements
            printf("The array in reverse order is: ");
            for(i = n - 1; i >= 0; i--) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;

        case 4:
            // Find Average of Array Elements
            sum = 0;
            for(i = 0; i < n; i++) {
                sum += arr[i];
            }
            average = (float)sum / n;
            printf("The average of the array elements is: %.2f\n", average);
            break;

        default:
            printf("Invalid choice. Please enter a valid option.\n");
            break;
    }

    return 0;
}
