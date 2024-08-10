#include <stdio.h>

int main(){

int maior,menor,valor;
printf("Escolha um numero:\n");
scanf("%d",&maior);
menor=maior;
printf("Escolha um numero:\n");
scanf("%d",&valor);
if(valor>maior){
  maior=valor;
}
if(valor<menor){
  menor=valor;
}
printf("Escolha um numero:\n");
scanf("%d",&valor);
if(valor>maior){
  maior=valor;
}
if(valor<menor){
  menor=valor;
}
printf("Escolha um numero:\n");
scanf("%d",&valor);
if(valor>maior){
  maior=valor;
}
if(valor<menor){
  menor=valor;
}
printf("Escolha um numero:\n");
scanf("%d",&valor);
if(valor>maior){
  maior=valor;
}
if(valor<menor){
  menor=valor;
}
printf("o maior e %d",maior);
printf("\n o menor e %d",menor);


return 0;
}