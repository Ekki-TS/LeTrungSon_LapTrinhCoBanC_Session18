#include <stdio.h>

void sortArray(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int numbers[] = {5, 1, 9, 3, 7};   
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Mang ban dau: ");
    printArray(numbers, size);
    sortArray(numbers, size);

    printf("Mang sau khi sap xep: ");
    printArray(numbers, size);

    return 0;
}
