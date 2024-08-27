#include <stdio.h>

int main() {
    int valor1,valor2;
    printf("Escolha dois numero\n");
    scanf("%d%d",&valor1,&valor2);
    printf("O resultado e %f",(float)valor1/valor2);
    return 0;
}