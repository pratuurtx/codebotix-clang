#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[100];
    float score;
} Student;

void printStudents(Student arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("Student: %d\n", i + 1);
        printf("\tID: %d\n", arr[i].id);
        printf("\tName: %s\n", arr[i].name);
        printf("\tScore: %.2f\n\n", arr[i].score);
    }
}

int main() {
    Student studentList[] = {
        {1, "Somchai", 88.5},
        {2, "Suda", 91.5},
        {3, "Anan", 76.3}
    };
    
    int size = sizeof(studentList) / sizeof(studentList[0]);
    printStudents(studentList, size);
    
    return 0;
}