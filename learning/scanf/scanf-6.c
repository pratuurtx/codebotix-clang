#include <stdio.h>

int main() {
    char str[100];
    scanf("%[^\n]", str);
    printf("Your name: %s", str);
    return 0;
}