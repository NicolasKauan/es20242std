#include <stdio.h>
int main(){
float n1,n2,n3,n4,resul;
char escolha;
printf("Escolha o tipo de media:\nA-ARITMETICA\nP-PONDERADA\nH-harmonica\n");
scanf("%c",&escolha);
printf("Nota 1: ");
scanf("%f",&n1);
printf("Nota 2: ");
scanf("%f",&n2);
printf("Nota 3: ");
scanf("%f",&n3);
printf("Nota 4: ");
scanf("%f",&n4);
if(escolha=='A'){
  resul=(n1+n2+n3+n4)/4;
  printf("entrou");
}
if(escolha=='P'){
  resul=(2*n1+3*n2+5*n3+10*n4)/20;
}
if(escolha=='H'){
  resul=4/((1/n1)+(1/n2)+(1/n3)+(1/n4));
}
  printf("O calculo aritmetico, ponderado ou harmonico e: %f",resul);


  return 0;
}