#include <stdio.h>

int main() {
    int money = 412;
    int $50bills = money /50;
     int  $20bills= (money - $50bills *50) / 20;
     int $5bills = (money - $20bills *20 - $50bills *50) / 5;
     int $1bills = money- $20bills *20 - $50bills *50 - $5bills * 5;
    printf("%d,%d,%d,%d\n" ,$50bills, $20bills, $5bills, $1bills);

    int secondmoney =600;
    int s50bills = secondmoney /50;
     int  s20bills= (secondmoney - s50bills *50) / 20;
     int s5bills = (secondmoney - s20bills *20 - s50bills *50) / 5;
     int s1bills = secondmoney- s20bills *20 - s50bills *50 - s5bills * 5;
    printf("%d,%d,%d,%d\n" ,s50bills, s20bills, s5bills, s1bills);
}

