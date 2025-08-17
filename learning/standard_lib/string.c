#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];

    // strlen() หาความยาว string
    printf("Length of str1 = %lu\n", strlen(str1));

    // strcpy() คัดลอกข้อความ
    strcpy(str3, str1);
    printf("Copy str1 to str3: %s\n", str3);

    // strcat() ต่อ string
    strcat(str1, str2);
    printf("Concatenate str1 + str2: %s\n", str1);

    // strcmp() เทียบ string
    if (strcmp("abc", "abd") == 0) {
        printf("They are equal\n");
    } else {
        printf("They are not equal\n");
    }

    return 0;
}