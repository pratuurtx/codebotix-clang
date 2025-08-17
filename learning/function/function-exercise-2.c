#include <stdio.h>

int isEvent(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int isEventV2(int n) {
    return n % 2 == 0;
}

int isEventV3(int n) {
    return !(n % 2);
}


int main() {
    int num;
    scanf("%d", &num);
    
    if (isEvent(num)) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
    
    if (isEventV2(num)) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }

    if (isEventV3(num)) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }

    return 0;
}