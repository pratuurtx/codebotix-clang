#include <stdio.h>

int x = 5;

void show() {
    int y = 10;
    static int count = 0;
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("function call %d time(s)\n", count);
    x += count;
    ++count;
}
int main() {
    show();
    show();
    show();
    return 0;
}