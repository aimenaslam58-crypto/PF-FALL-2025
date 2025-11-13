#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 20

// Product data
char product_names[MAX_PRODUCTS][50] = {
    "Liquid Foundation", "Matte Lipstick", "Blush Palette", "Eyeshadow Kit",
    "Powder Foundation", "Glossy Lipstick", "Cream Blush", "Sparkle Eyeshadow",
    "BB Cream", "Liquid Lipstick", "Powder Blush", "Matte Eyeshadow"
};

char categories[MAX_PRODUCTS][20] = {
    "foundation", "lipstick", "blush", "eyeshadow",
    "foundation", "lipstick", "blush", "eyeshadow",
    "foundation", "lipstick", "blush", "eyeshadow"
};

char shades[MAX_PRODUCTS][30] = {
    "Light Beige", "Ruby Red", "Pink Rose", "Neutral Brown",
    "Medium Tan", "Nude Pink", "Peach Coral", "Golden Shimmer",
    "Fair Ivory", "Berry Wine", "Soft Mauve", "Smoky Gray"
};

char skin_tones[MAX_PRODUCTS][20] = {
    "fair", "fair", "fair", "fair",
    "medium", "medium", "medium", "medium",
    "dark", "dark", "dark", "dark"
};

int product_count = 12;

//  Function using BITWISE OPERATOR
// Assign a BIT value (flag) to each category
int getCategoryFlag(char category[]) {
    if(strcmp(category, "foundation") == 0) return 1;   // 0001
    if(strcmp(category, "lipstick") == 0)   return 2;   // 0010
    if(strcmp(category, "blush") == 0)      return 4;   // 0100
    if(strcmp(category, "eyeshadow") == 0)  return 8;   // 1000
    return 0;
}

// Menu display
void display_menu() {
    printf("\n=== GLAM CODERS MAKEUP RECOMMENDER ===\n");
    printf("1. Get Makeup Recommendation\n");
    printf("2. View All Products\n");
    printf("3. Exit\n");
    printf("Choose an option (1-3): ");
}

// Taking user preferences
void get_user_preferences(char *skin_tone, char *category) {
    int skin_choice, cat_choice;

    printf("\n--- Enter Your Preferences ---\n");

    printf("Select your skin tone:\n1. Fair\n2. Medium\n3. Dark\n");
    printf("Enter choice: ");
    scanf("%d", &skin_choice);

    switch(skin_choice) {
        case 1: strcpy(skin_tone, "fair"); break;
        case 2: strcpy(skin_tone, "medium"); break;
        case 3: strcpy(skin_tone, "dark"); break;
        default: strcpy(skin_tone, "fair");
    }

    printf("\nSelect category:\n1. Foundation\n2. Lipstick\n3. Blush\n4. Eyeshadow\n");
    printf("Enter choice: ");
    scanf("%d", &cat_choice);

    switch(cat_choice) {
        case 1: strcpy(category, "foundation"); break;
        case 2: strcpy(category, "lipstick"); break;
        case 3: strcpy(category, "blush"); break;
        case 4: strcpy(category, "eyeshadow"); break;
        default: strcpy(category, "foundation");
    }
}

// Recommendation function
void find_recommendations(char *skin_tone, char *category) {
    printf("\n--- RECOMMENDATIONS ---\n");

    int userFlag = getCategoryFlag(category);
    int found = 0;

    for(int i = 0; i < product_count; i++) {

        int productFlag = getCategoryFlag(categories[i]);

        //  Bitwise AND used here!
        if((userFlag & productFlag) != 0 && strcmp(skin_tone, skin_tones[i]) == 0) {
            printf(" %s\n", product_names[i]);
            printf("   Shade: %s\n\n", shades[i]);
            found = 1;
        }
    }

    if(!found) {
        printf(" No matching products found.\n");
    }
}

// Display all products
void display_all_products() {
    printf("\n--- ALL PRODUCTS ---\n");
    for(int i = 0; i < product_count; i++) {
        printf("%d. %s\n", i+1, product_names[i]);
        printf("   Category: %s | Shade: %s | Skin Tone: %s\n\n",
               categories[i], shades[i], skin_tones[i]);
    }
}

// Main
int main() {
    int choice;
    char skin_tone[20], category[20];

    do {
        display_menu();
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                get_user_preferences(skin_tone, category);
                find_recommendations(skin_tone, category);
                break;

            case 2:
                display_all_products();
                break;

            case 3:
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 3);

    return 0;
}