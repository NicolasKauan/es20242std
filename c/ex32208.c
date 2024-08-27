#include <stdio.h>

int main() {
    int valor1;
    char resultado;

    printf("Digite um numero\n");
    scanf("%d",&valor1);

    if(valor1 < 100 || valor1 > 999){
        printf("Somente numeros de tre digitos sao aceitos");
    }else{
        resultado = ((valor1/100) % 2) == 0 ? printf("P") : printf("I");
        printf("%c",resultado);
    }
    return 0;
}