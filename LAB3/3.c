
#include <stdio.h>
#include<math.h>


int main() {
    int arm, check = 0;
    
    scanf("%d", &arm);
    int begin = arm;
    while ( arm > 0 ) {
      int d = arm % 10;
        check += pow(d, 3);
       arm = arm/10;
    }
    if (begin == check) {
        printf(" Armstrong");
    }
    else printf(" Not Armstrong");
}
