#include <stdio.h>

int main() {
    int m = 5, n = 7;

    printf("%d\n", m == n); // เท่ากับ (0 - false)
    printf("%d\n", m != n); // ไม่เท่ากับ (1 - true)
    printf("%d\n", m > n); // มากกว่า (0)
    printf("%d\n", m < n); // น้อยกว่า (1)
    printf("%d\n", m >= n); // มากกว่าหรือเท่ากับ (0)
    printf("%d\n", m <= n); // น้อยกว่าหรือเท่ากับ (1)
    
    return 0;
}