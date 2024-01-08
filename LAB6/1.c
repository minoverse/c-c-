#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRDAYS 500
#define PLAYERNR 6
#define InitialAccount 100
double historyarray[TRDAYS];
double playerwealth[PLAYERNR];
double Randompricegenerate(double previousPrice) {
    double randomvariable = 0.9 + ((double)rand() / RAND_MAX) * 0.2;
    return previousPrice * randomvariable;
}

void maxminPrice() {
   historyarray[0] = 13.9;

    for (int i = 1; i < TRDAYS;i++) {
        historyarray[i] = Randompricegenerate(historyarray[i - 1]);
    }

   
    double minPrice =historyarray[0];
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
   

    for (int i = 0; i < PLAYERNR; i++){
        double endAccount = InitialAccount;
        int stocknumber = 0;
         historyarray[0] = 13.9;
        for (int j = 1; j <= TRDAYS; j++){
             historyarray[j] = Randompricegenerate(historyarray[j - 1]);
            int randomaction = rand() % 2 ;// 0 means selling stocks, 1 means buying stocks.
            int randomstock = rand() % (int)(endAccount / historyarray[j] + 1 );
            if (randomaction ==0 && stocknumber >= randomstock ) {
                endAccount += historyarray[j] * randomstock;
                stocknumber -=  randomstock;
            }
            else if (randomaction ==1 && endAccount >= historyarray[j] * randomstock ) {
                 endAccount -= historyarray[j] * randomstock;
                stocknumber +=  randomstock;
            }
        }
        playerwealth[i] =  endAccount + stocknumber * historyarray[TRDAYS];
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
