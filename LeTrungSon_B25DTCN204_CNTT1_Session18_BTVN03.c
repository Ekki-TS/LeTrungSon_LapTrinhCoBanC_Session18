#include <stdio.h>

void sum(int *x, int *y, int *result) {
    *result = *x + *y;  
}

int main() {
    int a = 7;
    int b = 12;
    int result = 0;

    sum(&a, &b, &result);
    printf("Tong cua %d va %d la: %d\n", a, b, result);

    return 0;
}
