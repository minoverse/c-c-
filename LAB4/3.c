#include <stdio.h>

void withdraw(float *ptotal, float *utotal);
void put(float *ptotal, float *utotal);
void check(float ptotal, float utotal);
void convert(float *ptotal, float *utotal);

int main() {
    char option;
    float ptotal = 0.00, utotal = 0.00;

    do {
        printf("Enter your option: ");
        scanf(" %c", &option);

        switch (option) {
            case 'W':
                withdraw(&ptotal, &utotal);
                break;

            case 'P':
                put(&ptotal, &utotal);
                break;

            case 'C':
                check(ptotal, utotal);
                break;

            case 'V':
                convert(&ptotal, &utotal);
                break;

            case 'Q':
                printf("DONE\n");
                break;

            default:
                printf("Invalid\n");
        }
    } while (option != 'Q');

    return 0;
}

void withdraw(float *ptotal, float *utotal) {
    char currency;
    float money;

    printf("Enter currency (P  PLN, U  USD): ");
    scanf(" %c", &currency);

    if (currency == 'P') {
        printf("Enter money to withdraw (PLN): ");
        scanf("%f", &money);
        if (*ptotal >= money && money >= 0) {
            *ptotal -= money;
            printf("Withdraw success.\n");
        } else {
            printf("Invalid amount \n");
        }
    } else if (currency == 'U') {
        printf("Enter money to withdraw (USD): ");
        scanf("%f", &money);
        if (*utotal >= money && money >= 0) {
            *utotal -= money;
            printf("Withdrawal success.\n");
        } else {
            printf("Invalid amount \n");
        }
    } else {
        printf("Invalid currency.\n");
    }
}

void put(float *ptotal, float *utotal) {
    char currency;
    float money;

    printf("Enter currency (P  PLN, U  USD): ");
    scanf(" %c", &currency);

    if (currency == 'P') {
        printf("Enter money to put (PLN): ");
        scanf("%f", &money);
        if (money >= 0) {
            *ptotal += money;
            printf("Deposit success.\n");
        } else {
            printf("Invalid amount.\n");
        }
    } else if (currency == 'U') {
        printf("Enter money to put (USD): ");
        scanf("%f", &money);
        if (money >= 0) {
            *utotal += money;
            printf("Deposit success.\n");
        } else {
            printf("Invalid amount.\n");
        }
    } else {
        printf("Invalid currency.\n");
    }
}

void check(float ptotal, float utotal) {
    printf("PLN total: %.2f\n", ptotal);
    printf("USD total: %.2f\n", utotal);
}

void convert(float *ptotal, float *utotal) {
    char direction;
    float money;

    printf("Enter conversion direction (P  USD, U  PLN): ");
    scanf(" %c", &direction);

    if (direction == 'P') {
        printf("Enter money to convert from PLN to USD: ");
        scanf("%f", &money);
        if (*ptotal >= money && money >= 0) {
            *ptotal -= money;
            *utotal += money * 0.24; // Adjust the conversion rate as needed
            printf("Conversion success.\n");
        } else {
            printf("Invalid amount or insufficient funds.\n");
        }
    } else if (direction == 'U') {
        printf("Enter money to convert from USD to PLN: ");
        scanf("%f", &money);
        if (*utotal >= money && money >= 0) {
            *utotal -= money;
            *ptotal += money * 4.24; // Adjust the conversion rate as needed
            printf("Conversion success.\n");
        } else {
            printf("Invalid amount .\n");
        }
    } else {
        printf("Invalid conversion direction.\n");
    }
}
