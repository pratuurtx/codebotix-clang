#include <stdio.h>

int main() {
    unsigned int a = 5; // 0101
    unsigned int b = 3; // 0011

    printf("%d\n", a & b); // AND ระดับบิต (1 - 0001)
    printf("%d\n", a | b) ;// OR ระดับบิต (7 - 0111)
    printf("%d\n", a ^ b); // XOR ระดับบิต (6 - 0110)
    printf("%d\n", ~a); // NOT ระดับบิต (ค่าจะขึ้นกับขนาดของ int)
    printf("%d\n", a << 1); // เลื่อนบิตไปทางซ้าย (10 - 1010)
    printf("%d\n", a >> 1); // เลื่อนบิตไปทางขวา (2 - 0010)
    
    return 0;
}