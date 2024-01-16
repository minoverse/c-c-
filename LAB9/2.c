#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char str1[100], str2[100];
    printf("put the first string:");
    fgets(str1, sizeof(str1), stdin);
    printf("put the second string:");
    fgets(str2, sizeof(str2), stdin);
    char *result = (char *)malloc(strlen(str1) + strlen(str2) + 1);
    strncpy(result, str1, strlen(str1) - 1);
    strcpy(result + strlen(str1) - 1, str2);
    printf("Concatenate two strings: %s\n", result);
    free(result);
    return 0;
}
