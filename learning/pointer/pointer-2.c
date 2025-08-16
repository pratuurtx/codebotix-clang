#include <stdio.h>

int main() {
    int arr[3] = {10, 9, 13};
    
    printf("%p\n", arr); // &arr[0]
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[1]);
    printf("%p\n", &arr[2]);
    
    printf("%d\n", *arr); // *(&arr[0]) arr[0]
    printf("%d\n", *(arr+1)); // arr[1]
    
    
    return 0;
}