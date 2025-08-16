#include<stdio.h>

int main() {
    char name[100];
    printf("Please enter your name: ");
    scanf("%s", name);

    printf("You entered: %s", name);
    return 0;
}