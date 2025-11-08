#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *a, int *b) {
    int temp;

    temp = *a;   // store value of a in temp
    *a = *b;     // assign value of b to a
    *b = temp;   // assign value of temp (old a) to b
}

int main() {
    int x = 10, y = 20;

    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Call swap function and pass addresses
    swap(&x, &y);

    printf("After swapping:  x = %d, y = %d\n", x, y);

    return 0;
}
