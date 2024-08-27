#include <stdio.h>
#include <math.h>

int main(){
    double n1,n2;
    char op;
    printf("Digite a operação (+ - * /) \n");
    scanf("%c",&op);
    printf("Digite dois numeros\n");
    scanf("%lf %lf",&n1,&n2);
    switch (op)
    {
    case '+' :
        printf("soma = %lf", n1+n2);
        break;
    case '-' :
        printf("subtração = %lf",n1-n2);
        break;
    case '*' :
        printf("multiplicaçao = %lf",n1*n2);
        break;
    case '/' :
        printf("Divisao = %lf",n1/n2);
        break;   
    default:
        printf("a operacao nao existe");
    }

    return 0;
}

 