#include<stdio.h>

int main() {
    int x = 5; // กำหนดค่า

    x += 3; // เท่ากับ x = x + 3 (8)
    printf("x after x += 3: %d\n", x);

    x -= 2; // เท่ากับ x = x - 2 (6)
    printf("x after x -= 2: %d\n", x);
    
    x *= 4; // เท่ากับ x = x * 4 (24)
    printf("x after x *= 2: %d\n", x);
    
    x /= 3; // เท่ากับ x = x / 3 (8)
    printf("x after x /= 3: %d\n", x);

    x %= 5; // เท่ากับ x = x % 5 (3)
    printf("x after x %%= 5: %d\n", x);
    
    return 0;
}