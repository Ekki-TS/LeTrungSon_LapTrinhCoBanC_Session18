#include <stdio.h>

void updateElement(int *arr, int size, int newValue, int position) {
    if (position < 0 || position >= size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    arr[position] = newValue;  
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numbers[] = {3, 7, 2, 9, 5};   
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Mang ban dau: ");
    printArray(numbers, size);

    updateElement(numbers, size, 100, 2);

    printf("Mang sau khi cap nhat: ");
    printArray(numbers, size);

    return 0;
}
