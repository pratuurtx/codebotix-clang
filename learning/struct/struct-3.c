#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[100];
    float score;
} Student;

int main() {
    Student stu1;
    
    stu1.id = 7;
    strcpy(stu1.name, "Somchai");
    stu1.score = 78.50;
    
    Student *ptr = &stu1;
    
    printf("id: %d\n", ptr->id);
    printf("name: %s\n", ptr->name);
    printf("score: %.2f\n", ptr->score);
    
    return 0;
}