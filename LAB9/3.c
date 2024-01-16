#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int h;
    printf("put the height:");
    scanf("%d", &h);
    char *row = malloc((h+2) * sizeof(char));
    memset(row,' ',h+2);
    for (int i =0; i <h; i++) {
        row = realloc(row, (h + 4 + i) * sizeof(char));
        row[h + 3 + i] = '\0';
        row[h + 2 + i ] = '#';
        row[h - 1 - i] = '#';
         
        printf("%s\n", row);
    }
    free(row);
    return 0;
}
