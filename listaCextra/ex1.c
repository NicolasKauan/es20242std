#include <stdio.h>
#include <math.h>

// Prototipação das funções
double soma(double n1, double n2);
double sub(double n1, double n2);
double divisao(double n1, double n2);
double mult(double n1, double n2);
double porcentagem(double n1, double n2);
double med(double n1, double n2);
void grau2(double a, double b, double c);

int main() {
    double n1, n2, a, b, c;
    char escolha;

    printf("Escolha a operacao:\n +\n-\n/\n*\np(porcentagem)\nm(media)\ns(equacao do segundo grau)\n");
    scanf(" %c", &escolha); // Adicionado espaço antes de %c para capturar caracteres corretamente

    if (escolha == 's') {
        printf("Digite o valor de (a): ");
        scanf("%lf", &a);
        printf("Digite o valor de (b): ");
        scanf("%lf", &b);
        printf("Digite o valor de (c): ");
        scanf("%lf", &c);
    } else {
        printf("Escolha o primeiro numero: ");
        scanf("%lf", &n1);
        printf("Escolha o segundo numero: ");
        scanf("%lf", &n2);
    }

    switch (escolha) {
        case '+':
            printf("A Soma e %.2lf\n", soma(n1, n2));
            break;
        case '-':
            printf("A Subtracao e %.2lf\n", sub(n1, n2));
            break;
        case '/':
            printf("A divisao e %.2lf\n", divisao(n1, n2)); 
            break;
        case '*': 
            printf("A Multiplicacao e %.2lf\n", mult(n1, n2)); 
            break;
        case 'm': 
            printf("A Media e %.2lf\n", med(n1, n2));
            break;
        case 's':
            grau2(a, b, c); // Ajustado para chamada correta
            break;
        case 'p':
            printf("A porcentagem e %.2lf\n", porcentagem(n1, n2));
            break;
        default:
            printf("Operacao invalida\n");
            break;
    }

    return 0;
}

double soma(double n1, double n2) {
    return n1 + n2;
}

double sub(double n1, double n2) {
    return n1 - n2;
}

double divisao(double n1, double n2) {
    if (n2 != 0) {
        return n1 / n2;
    } else {
        printf("Erro: Divisao por zero!\n");
        return 0;
    }
}

double mult(double n1, double n2) {
    return n1 * n2;
}

double porcentagem(double n1, double n2) {
    return divisao(mult(n1, n2), 100);
}

double med(double n1, double n2) {
    return divisao(soma(n1, n2), 2);
}

void grau2(double a, double b, double c) {
    double delta = sub((b * b), (mult(mult(4, a), c)));
    if (delta < 0) {
        printf("Nao existem raizes reais.\n");
    } else if (delta == 0) {
        double x1 = divisao(-b, mult(2, a));
        printf("x1 = x2 = %.2lf\n", x1);
    } else {
        double x1 = divisao(soma(-b, sqrt(delta)), mult(2, a));
        double x2 = divisao(sub(-b, sqrt(delta)), mult(2, a));
        printf("x1 = %.2lf e x2 = %.2lf\n", x1, x2);
    }
}
