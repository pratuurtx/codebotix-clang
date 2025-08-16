#include <stdio.h>

void greet() {
    printf("Greeting!\n");
}

void greetWithName(char name[]) {
    printf("Welcome, %s\n", name);
}

int getNumber() {
    return 7;
}

int add(int a, int b) {
    return a + b;
}

int main() {
    greet();

    greetWithName("Anna");

    printf("number: %d\n", getNumber());

    int sum = add(2, 3);
    printf("sum: %d", sum);

    return 0;
}