#include <stdio.h>
int main () {
    double peso, altura, imc;

    printf("Informe seu peso(KG):\n ");
    scanf("%lf", &peso);
    printf("Informe sua altura(m):\n ");
    scanf ("%lf", &altura);
    imc = peso/(altura*altura);
    if (imc <= 0 || peso <= 0 || altura <= 0 ){
        printf("Algum dado informado invalido!!!\n");
        return 0;
    }
    if (imc <= 16.9)
    {
        printf("Muito abaixo do peso\n");
    } else if (imc <= 18.4) {
        printf("Abaixo do peso\n");
    } else if (imc <= 24.9)
    {
        printf("Peso normal\n");
    } else if (imc <= 29.9) {
        printf("Acima do peso\n");
    } else if (imc <= 34.9) {
        printf("Obesidade grau 1\n");
    } else if (imc <= 40) {
        printf("Obesidade grau 2\n");
    } else {
        printf("Obesidade grau 3\n");
    }
    return 0;
}