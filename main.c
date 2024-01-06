
#include "tradestocks.h"

int main() {   
    srand((unsigned int)time(NULL));   
    printf("problem1 answer\n");
    maxminPrice();
    printf("problem2 answer\n");
    endtotal();
    printf("problem3 answer\n");
    printf("Unsorted value:\n");
    for (int i = 0; i < PLAYERNR; ++i) {
        printf("Player %d wealth: $%.2f\n", i + 1, playerwealth[i]);
    }

    bubbleSort();

    printf("Sorted value:\n");
    for (int i = 0; i < PLAYERNR; ++i) {
        printf("Player %d wealth: $%.2f\n", i + 1, playerwealth[i]);
    }

    printf("Minimum wealth: $%.2f\n", playerwealth[0]);
    printf("Maximum wealth: $%.2f\n", playerwealth[PLAYERNR - 1]);
    return 0;
}
