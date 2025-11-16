#include <stdio.h>

int findElement(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {   
            return i;            
        }
    }
    return -1;   
}

int main() {
    int numbers[] = {4, 7, 1, 9, 3, 8};   
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int needFind;

    printf("Nhap gia tri can tim: ");
    scanf("%d", &needFind); 

    int position = findElement(numbers, size, needFind);

    if (position != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri %d\n", needFind, position);
    } else {
        printf("Gia tri %d khong ton tai trong mang\n", needFind);
    }

    return 0;
}
