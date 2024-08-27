#include <stdio.h>

int main () {
    int num;
    printf("Digite um numero\n");
    scanf("%d",&num);
    if(num%3==0&&num%7==0){
        printf("o numero %d e divisivel por 3 e 7",num);
    }
    else(
        printf("o numero nao e divisivel por 3 e 7")
    );


    return 0;
}