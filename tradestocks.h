// tradestocks.h
#ifndef TRADESTOCKS_H
#define TRADESTOCKS_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRDAYS 500
#define PLAYERNR 6
#define InitialAccount 100

extern double historyarray[TRDAYS];
extern double playerwealth[PLAYERNR];

double Randompricegenerate(double previousPrice);

void maxminPrice();

void endtotal();

void bubbleSort();

#endif
