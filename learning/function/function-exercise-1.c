#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int max_num = max(x, y);
    printf("The maximum value is %d", max_num);

    return 0;
}