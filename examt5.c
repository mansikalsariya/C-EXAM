#include <stdio.h>
// Structure representing a house
struct House {
    int room_quantity;
    int established_year;
    char city[40];
};

int main() {
    int n; // Number of houses
    printf("Enter the number of houses:");
    scanf("%d",&n);

    // Array of structures to hold houses
    struct House houses[n];

    // Input information for each house
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for House %d:\n", i + 1);
        printf("Number of rooms:");
        scanf("%d", &houses[i].room_quantity);
        printf("Established year:");
        scanf("%d", &houses[i].established_year);
        printf("City:");
        scanf("%s", houses[i].city);
    }

   printf("\nHouse details:\n");

    for (int i = 0; i < n; i++) {
        printf("\nHouse %d:\n", i + 1);
        printf("Number of rooms: %d\n", houses[i].room_quantity);
        printf("Established year: %d\n", houses[i].established_year);
        printf("City: %s\n", houses[i].city);
    }

    return 0;
}
