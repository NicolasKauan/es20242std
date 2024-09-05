#include <stdio.h>
int main () {
    int decimal;

    printf("Digite um numero decimal: ");
    scanf("%d", &decimal);

    printf("Hexadecimal: %X\n", decimal);
    printf("Octal: %o\n", decimal);    
    
    
    return 0;
}