#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];
    char reverseString[100];

    printf("Nhap chuoi: "); 
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0';

    int length = strlen(inputString);

    char *src = inputString;           
    char *dest = reverseString + length - 1;  

    for (int i = 0; i < length; i++) {
        *dest = *src;  
        dest--;
        src++;
    }

    reverseString[length] = '\0';  

    printf("Chuoi ban dau:   %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);

    return 0;
}
