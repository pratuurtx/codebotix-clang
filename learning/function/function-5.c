#include <stdio.h>

// Function Declaration (prototype)
int add(int, int);

int main() {
    int result = add(3, 4);
    printf("Result: %d\n", result);
    return 0;
}

// Function Definition
int add(int a, int b) {
    return a + b;
}