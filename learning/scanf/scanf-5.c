#include <stdio.h>

int main() {
    int age;
    float gpa;
    char grade;
    
    printf("Enter your information: Age Gpa Grade (e.g., 18 3.50 A): \n");
    scanf("%d %f %c", &age, &gpa, &grade);
    
    printf("\n=== The information you entered ===\n");
    printf("Age: %d years\n", age);
    printf("Gpa: %.2f\n", gpa);
    printf("Grade: %c", grade);
    return 0;
}