#include <stdio.h>//biblioteca
#include <math.h>//biblioteca math
double soma(double n1, double n2);
double sub(double n1, double n2);
double mult(double n1, double n2);
double div(double n1, double n2);
double media(double n1, double n2);
double grau2(double n1, double n2, double n3);

int main (){ //funcao principal tendo como inteiro
    double n1,n2,n3;
    char escolha;
    /*
    printf("soma %.2f\n",soma(8,3));
    printf("subtracao %.2f\n",sub(8,3));
    printf("multiplicacao %.2f\n",mult(8,3));
    printf("divisao %.2f\n",div(8,3));
    printf("Media %.2f\n",media(8,3));
    */
    printf("Escolha uma operacao\n+ adicao\n- subtracao\n* multiplicacao\n/ divisao\nm media\ns operacao segundo grau\n");
    scanf("%c",&escolha);
    printf("Informe um numero:\n");
    scanf("%lf",&n1);
    printf("Informe um segundo numero:\n");
    scanf("%lf",&n2);
    if (escolha == 's'){
        printf("infome um terceiro numero:\n");
        scanf("%lf",&n3);
    } 
    switch (escolha)
    {
    case '+':
        printf("A soma e %.2lf\n",soma(n1,n2));
        break;
    case '-':
        printf("A subtracao e %.2lf\n" ,sub(n1,n2));
        break;
    case '*':
        printf("A multiplicacao e %.2lf\n" ,mult(n1,n2));
        break;
    case '/':
        printf("A divisao e %.2lf\n" ,div(n1,n2));
        break;
    case 'm':
        printf("A media e %.2lf\n" ,media(n1,n2));
        break;
    case 's':
        printf("O resultado da equacao do segundo grau e %.2lf\n",grau2(n1,n2,n3));
        break;    
    default:
        printf("Operacao invalida!\n");
        break;
    }

    return 0;//retornar a 0
}

double soma(double n1, double n2){
    return n1+n2;
}
double sub(double n1, double n2){
    return n1-n2;
}
double mult(double n1, double n2){
    return n1*n2;
}
double div(double n1, double n2){
    return n1/n2;
}
double media(double n1, double n2){
    return div(soma(n1,n2),2);
}
double grau2(double n1, double n2, double n3){
    double delta = sub(mult(n2,n2),mult(mult(4,n1),n3));
    printf("Delta = %2.lf",delta);
    if(delta < 0){
        printf("Não existe raiz com numero negativo");
    } else if (delta == 0){
        return (((-1)*n2)+sqrt(delta))/2*n1;
    } else{
        double x1 = ((-n2)+sqrt(delta))/2*n1;
        double x2 = ((-n2)-sqrt(delta))/2*n1;
        printf ("x1 e %lf; x2 e %lf",x1,x2);
    }
    return 0;    
}

