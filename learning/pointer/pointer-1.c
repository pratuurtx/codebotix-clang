#include <stdio.h>

int main() {
    int x, y;
    
    int *a;
    int *b;
    
    x = 10;
    
    a = &x;
    b = a;
    
    y = *b;
    
    printf("value of x: %d\n", x);
    printf("address of x: %p\n\n", &x);
    
    printf("value of a: %p\n", a);
    printf("address of a: %p\n", &a);
    printf("dereference of a: %d\n\n", *a);
    
    printf("value of b: %p\n", b);
    printf("address of b: %p\n", &b);
    printf("dereference of b: %d\n\n", *b);
    
    printf("value of y: %d\n", y);
    printf("address of y: %p\n\n", &y);
    return 0;
}