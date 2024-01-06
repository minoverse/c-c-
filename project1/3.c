#include <stdio.h>

int main() {
    int a = 4,b = 5,c = 7;
    int ab_max  = a*(a>b)+b*(b>=a);
    int bc_max  = b*(b>c)+c*(c>=b);
    int abc_max = ab_max*(ab_max>bc_max)+bc_max*(bc_max>=ab_max);
    printf("%d", abc_max);
}
