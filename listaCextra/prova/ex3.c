#include <stdio.h>

int main () {
    int num, maior1, maior2, maior3;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num);

    maior1 = num;
    maior2 = num;
    maior3 = num;

    printf("Informe o segundo numero: ");
    scanf("%d", &num);

    if(num > maior1){
        maior3 =  maior2;
        maior2 = maior1;
        maior1 = num;    
    } else if (num > maior2){
        maior3 = maior2;
        maior2 = num;
    } else if (num > maior3) {
        maior3 = num;
    }
    printf("Informe o terceiro numero: ");
    scanf("%d", &num);

    if(num > maior1){
        maior3 =  maior2;
        maior2 = maior1;
        maior1 = num;    
    } else if (num > maior2){
        maior3 = maior2;
        maior2 = num;
    } else if (num > maior3) {
        maior3 = num;
    }
    printf("Informe o quarto numero: ");
    scanf("%d", &num);

    if(num > maior1){
        maior3 =  maior2;
        maior2 = maior1;
        maior1 = num;    
    } else if (num > maior2){
        maior3 = maior2;
        maior2 = num;
    } else if (num > maior3) {
        maior3 = num;
    }
    printf("Informe o quinto numero: ");
    scanf("%d", &num);

    if(num > maior1){
        maior3 =  maior2;
        maior2 = maior1;
        maior1 = num;    
    } else if (num > maior2){
        maior3 = maior2;
        maior2 = num;
    } else if (num > maior3) {
        maior3 = num;
    }
    printf("Informe o sexto numero: ");
    scanf("%d", &num);

    if(num > maior1){
        maior3 =  maior2;
        maior2 = maior1;
        maior1 = num;    
    } else if (num > maior2){
        maior3 = maior2;
        maior2 = num;
    } else if (num > maior3) {
        maior3 = num;
    }    
    printf("Maior: %d\nSegundo maior: %d\nTerceiro maior: %d\n",maior1,maior2,maior3);
    return 0;
}
