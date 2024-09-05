
#include <stdio.h>

int main () {
    int temp, cont,j;
    int numeros[5];
    
    for (cont = 0; cont < 5; cont++)
    {
        printf("Digite o %d° numero: ",cont+1);
        scanf("%d", &numeros[cont]);
    }
    for (cont = 0; cont < 5 - 1; cont++) {
        for (j = 0; j < 5 - cont - 1; j++ ) {
            if (numeros[j] < numeros [j + 1]){
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }        
        }
    }
    printf ("\nNumeros em ordem descrecente\n");
    for (cont = 0; cont < 5; cont++){
        printf("%d",numeros[cont]);
    }
    printf("\n");
    return 0;
}



