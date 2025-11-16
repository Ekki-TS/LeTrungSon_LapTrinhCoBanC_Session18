#include <stdio.h>

int main() {
    int number = 67;
    int *ptr = &number;  

    printf("Gia tri cua number: %d\n", number);
    printf("Dia chi cua number (dung &): %p\n", &number);

    printf("Gia tri thong qua con tro: %d\n", *ptr);
    printf("Dia chi luu trong con tro ptr: %p\n", ptr);

    return 0;
}
