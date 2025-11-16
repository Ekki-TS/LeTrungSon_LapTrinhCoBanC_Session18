#include <stdio.h>

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));   
    }
}

int main() {
    int numbers[] = {3, 7, 2, 9, 5};   
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Cac phan tu trong mang: ");
    printArray(numbers, size); 

    return 0;
}
s