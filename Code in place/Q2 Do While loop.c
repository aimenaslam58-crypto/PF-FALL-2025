#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        digit = num % 10;      
        sum = sum + digit;   
        num = num / 10;        
    } while(num != 0);

    printf("Sum of digits = %d\n", sum);

    return 0;
}
