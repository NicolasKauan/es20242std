#include <stdio.h>
int main () {
    double m;
    printf("Informe um valor em metros: ");
    scanf("%lf",&m);
    printf("O numero declarado em decimetros %.2lf",(m*10));
    printf("\nO numero declarado em centimetros %.2lf",(m*100));
    printf("\nO numero declarado em milimetros %.2lf",(m*1000));
    return 0;
}