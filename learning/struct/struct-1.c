#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[100];
    float score;
};

int main() {
    struct Student stu1;
    
    stu1.id = 7;
    strcpy(stu1.name, "Somchai");
    stu1.score = 78.50;
    
    printf("id: %d\n", stu1.id);
    printf("name: %s\n", stu1.name);
    printf("score: %.2f\n", stu1.score);
    
    return 0;
}