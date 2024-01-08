#include "tradestocks.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double historyarray[TRDAYS];
double playerwealth[PLAYERNR];

double Randompricegenerate(double previousPrice) {
    double randomvariable = 0.9 + ((double)rand() / RAND_MAX) * 0.2;
    return previousPrice * randomvariable;
}

void maxminPrice() {
    historyarray[0] = 13.9;

    for (int i = 1; i < TRDAYS; i++) {
        historyarray[i] = Randompricegenerate(historyarray[i - 1]);
    }

    double minPrice = historyarray[0];
    double maxPrice = historyarray[0];

    for (int i = 1; i < TRDAYS; i++) {
        if (historyarray[i] < minPrice) {
            minPrice = historyarray[i];
        }
        if (historyarray[i] > maxPrice) {
            maxPrice = historyarray[i];
        }
    }

    printf("Minimum price in the stock history: $%.2f\n", minPrice);
    printf("Maximum price in the stock history: $%.2f\n", maxPrice);
}

void endtotal() {
    historyarray[0] = 13.9;
    for (int i = 0; i < PLAYERNR; i++) {
        double endAccount = InitialAccount;
        int stocknumber = 0;

        for (int j = 1; j <= TRDAYS; j++) {
            historyarray[j] = Randompricegenerate(historyarray[j - 1]);
            int randomaction = rand() % 2; // 0 means selling stocks, 1 means buying stocks.
            int randomstock = rand() % (int)(endAccount / historyarray[j] + 1);
            if (randomaction == 0 && stocknumber >= randomstock) {
                endAccount += historyarray[j] * randomstock;
                stocknumber -= randomstock;
            } else if (randomaction == 1 && endAccount >= historyarray[j] * randomstock) {
                endAccount -= historyarray[j] * randomstock;
                stocknumber += randomstock;
            }
        }
        playerwealth[i] = endAccount + stocknumber * historyarray[TRDAYS];
    }
    for (int i = 0; i < PLAYERNR; i++) {
        printf("Player %d wealth: $%.2f\n", i + 1, playerwealth[i]);
    }
}

void bubbleSort() {
    for (int i = 0; i < PLAYERNR - 1; i++) {
        for (int j = 0; j < PLAYERNR - i - 1; j++) {
            if (playerwealth[j] > playerwealth[j + 1]) {
                double temp = playerwealth[j];
                playerwealth[j] = playerwealth[j + 1];
                playerwealth[j + 1] = temp;
            }
        }
    }
}
