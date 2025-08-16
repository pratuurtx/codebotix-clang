#include <stdio.h>

void modifyValue(int a) {
    a = a + 10;
    printf("Inside modifyValue: a = %d\n", a);
}

void modifyReference(int *a) {
    *a = *a + 10;
    printf("Inside modifyReference: a = %d\n", *a);
}

int main() {
    int num1 = 5, num2 = 5;
    
    printf("before modify value num1: %d\n", num1);
    modifyValue(num1);
    printf("after modify value num1: %d\n\n", num1);
    
    printf("before modify reference num2: %d\n", num2);
    modifyReference(&num2);
    printf("after modify reference num2: %d\n", num2);
    
    return 0;
}