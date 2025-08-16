#include<stdio.h>

int main() {
    int a = 10, b = 3;

    printf("%d\n", a + b); // บวก (13)
    printf("%d\n", a - b); // ลบ  (7)
    printf("%d\n", a * b); // คูณ (30)
    printf("%d\n", a / b); // หาร (3) - หารแบบจำนวนเต็ม
    printf("%d\n", a % b); // หารเอาเศษ (1)
    printf("%d\n", ++a); // เพิ่มค่าก่อนใช้ (11)
    printf("%d\n", b--); // ลดค่าหลังใช้ (3) แล้ว b จะเป็น 2
    
    return 0;
}