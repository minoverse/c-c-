#include <stdio.h>

int main() {
    double consumption,price ;
    scanf("%lf", &consumption);
    if (consumption <2000.00) {
     double price =   consumption * 0.96;
      printf("%.2f",price);
      }
    else if (consumption >=2000.00 && consumption<5000){
       double price =   (consumption-2000) * 1.55 + 2000*0.96 ;
        printf("%.2f",price);
    }
    else if (consumption >5000.00){
       double price =   (consumption-5000 )* 2.30 + 3000 * 1.55 + 2000*0.96;
        printf("%.2f",price);
    }
}
