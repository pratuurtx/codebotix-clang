#include <stdio.h>

// Function Declarations (Prototypes)
void hello();
void printName(char name[]);
int getNumber();
int sum(int a, int b);

int main() {
    hello();

    printName("Alice");
    
    int num = getNumber();
    printf("getNumber() returnted: %d\n", num);

    int result = sum(5, 7);
    printf("sum(5, 7) returned: %d\n", result);

    return 0;
}

void hello() {
    printf("Hello from function with no parameter and no return!\n");
}

void printName(char name[]) {
    printf("Hello, %s!\n", name);
}

int getNumber() {
    return 42;
}

int sum(int a, int b) {
    return a + b;
}