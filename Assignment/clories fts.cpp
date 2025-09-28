#include <stdio.h>

int main() {
    int calories, fatGrams;

    // Ask user for input
    printf("Enter total calories: ");
    scanf("%d", &calories);

    printf("Enter fat grams: ");
    scanf("%d", &fatGrams);

    // ? Validation check: negative values don’t make sense
    if (calories < 0 || fatGrams < 0) {
        printf("Error: Values cannot be negative.\n");
    } else {
        // 1 gram of fat = 9 calories
        int caloriesFromFat = fatGrams * 9;

        // ? Another validation: calories from fat cannot exceed total calories
        if (caloriesFromFat > calories) {
            printf("Error: Fat calories cannot be more than total calories.\n");
        } else {
            // Calculate percentage of calories from fat
            double percent = (double)caloriesFromFat / calories * 100;

            // Show results
            printf("Calories from fat: %d\n", caloriesFromFat);
            printf("Percentage of calories from fat: %.2lf%%\n", percent);

            // ? Check if food is low fat (< 30% from fat)
            if (percent < 30)
                printf("This food is LOW in fat.\n");
            else
                printf("This food is NOT low in fat.\n");
        }
    }

    return 0;  // Program ends successfully
}
