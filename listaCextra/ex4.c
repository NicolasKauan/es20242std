#include <stdio.h>
int main () {
    double num,cont = 0,maior = -9999999
    for (cont = 0; cont < 2; cont++) {
        printf("Digite o ",cont+1,"° numero: ");
        scanf("%lf", &num);
        if (num > maior)
        {
            maior = maior+num
        } else if (num = maior)
        {
            
        }
    }
    printf("o numero maior é", maior)
    
    
    return 0;
}