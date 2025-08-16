#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {    
    printf("sum: %d", add(1, 3));
    return 0;
}