#include <stdio.h>

// Function to calculate cube
int cube(int x) {
    return x * x * x;  // returns cube of x
}

int main() {
    int num, result;

    // Ask user for a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call cube() and store the result
    result = cube(num);

    // Print the result
    printf("The cube of %d is %d\n", num, result);

    return 0;
}
