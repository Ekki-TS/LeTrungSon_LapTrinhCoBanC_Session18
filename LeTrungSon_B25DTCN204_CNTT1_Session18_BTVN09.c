#include <stdio.h>

void insertElement(int arr[], int *size, int maxSize, int value, int position) {
    if (position < 0 || position > *size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    if (*size >= maxSize) {
        printf("Mang da day, khong the them phan tu!\n");
        return;
    }

    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;

    (*size)++;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numbers[10] = {3, 7, 2, 9, 5};   
    int size = 5;                         
    int maxSize = 10;                    

    printf("Mang ban dau: ");
    printArray(numbers, size);

    insertElement(numbers, &size, maxSize, 100, 2);

    printf("Mang sau khi them phan tu: ");
    printArray(numbers, size);

    return 0;
}
