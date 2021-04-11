#include <stdio.h>
// estruturas de decisao if, else, else if
int main(void) {
  // declaracao de variaveis
  int idade;

  //entrada
  printf("Qual é a sua idade?\n");
  scanf("%d", &idade);
  printf("A sua idade é %d", idade);

  //processamento
  if(idade < 18){
    printf("você é adulto");
  }
  else if( idade > 18 && idade < 60){
    printf("você é adulto");
  }
  else{
    printf("você é idoso");
  }
  //saida
  printf("sua idade é %d", idade);
  return 0;
  }