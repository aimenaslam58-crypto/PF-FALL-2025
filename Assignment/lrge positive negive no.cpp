#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 99 || num < -99) {   // handle large positive and negative numbers
        int lastDigit = num % 10;
        num = num / 10 - 2 * lastDigit; 
    }

    if (num == 0 || num == 7 || num == -7)
        printf("Divisible by 7\n");
    else
        printf("Not divisible by 7\n");

    return 0;
}
