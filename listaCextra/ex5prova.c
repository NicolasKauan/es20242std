#include <stdio.h>
int main () {
    char nome[100];
    int ano;
    printf ("Informe seu nome: ");
    scanf("%s", &nome);
    printf ("Informe seu ano de nascimento: ");
    scanf("%d", &ano);
    if (ano <= 0){
        printf ("Ano invalido\n");
        return 0;
    }
    if (ano%4 == 0 && ano%100 != 0 )
    {
        printf("Seu nome e %s e voce nasceu em um ano bissexto.", nome);
    } else {
        printf("Seu nome e %s e voce nao nasceu em um ano bissexto.", nome);
    }
    


    return 0;
}