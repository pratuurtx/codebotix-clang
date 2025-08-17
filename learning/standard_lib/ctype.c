#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = 'a';
    char num = '5';
    char space = ' ';
    char upper = 'Z';

    // isalpha() -> เป็นตัวอักษรไหม
    if (isalpha(ch)) {
        printf("%c is an alphabet character\n", ch);
    }

    // isdigit() -> เป็นตัวเลขไหม
    if (isdigit(num)) {
        printf("%c is a digit\n", num);
    }

    // isspace() -> เป็น whitespace เช่น ช่องว่าง, \t, \n
    if (isspace(space)) {
        printf("space is a whitespace character\n");
    }

    // islower() -> เป็นตัวอักษรพิมพ์เล็กไหม
    if (islower(ch)) {
        printf("%c is lowercase\n", ch);
    }

    // isupper() -> เป็นตัวอักษรพิมพ์ใหญ่ไหม
    if (isupper(upper)) {
        printf("%c is uppercase\n", upper);
    }

    // toupper() / tolower() -> แปลง case
    printf("Uppercase of %c is %c\n", ch, toupper(ch));
    printf("Lowercase of %c is %c\n", upper, tolower(upper));
}