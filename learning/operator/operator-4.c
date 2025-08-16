#include <stdio.h>

int main() {
    int p = 1, q = 0;

    printf("%d\n", p && q); // AND (0)
    printf("%d\n", p || q); // OR (1)
    printf("%d\n", !p); // NOT (0)
    return 0;
}