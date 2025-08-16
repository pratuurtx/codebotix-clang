#include <stdio.h>

int y = 100; // Global variable

void test() { // Function Definition
    int y = 10; // Local variable
    printf("Inside function: y = %d\n", y);
}

int main() {
    test(); // Function Call
    printf("In main: y = %d\n", y);

    return 0;
}