#include <stdio.h>

int main() {
    char str[1000];
    scanf("%[^\n]", str);

    int sum = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U') {
            ++sum;
        }
    }

    printf("%d", sum);
    
    return 0;
}