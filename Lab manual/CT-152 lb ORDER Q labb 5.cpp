#include <stdio.h>

int main() {
    char choice;
    int num, qty, total = 0;

    printf("B = Burger (Rs.200)\n");
    printf("F = French Fries (Rs.50)\n");
    printf("P = Pizza (Rs.500)\n");
    printf("S = Sandwiches (Rs.150)\n\n");

    printf("How many types of snacks you want to order: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        printf("\nEnter snack %d you want to order (B/F/P/S): ", i);
        scanf(" %c", &choice);
        printf("Enter quantity: ");
        scanf("%d", &qty);

        if (choice == 'B' || choice == 'b')
            total += qty * 200;
        else if (choice == 'F' || choice == 'f')
            total += qty * 50;
        else if (choice == 'P' || choice == 'p')
            total += qty * 500;
        else if (choice == 'S' || choice == 's')
            total += qty * 150;
        else
            printf("Invalid choice!\n");
    }

    printf("\nTotal Bill = %d PKR\n", total);
    printf("Thank you for your order!\n");

    return 0;
}
