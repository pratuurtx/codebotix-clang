#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    scanf("%[^\n]", str);
    
    for (int i = 0; str[i] != '\0'; ++i) {
        if (islower(str[i])) {
            printf("%c", toupper(str[i]));
        } else if (isupper(str[i])) {
            printf("%c", tolower(str[i]));
        } else {
            printf("%c", str[i]);
        }
    }

}