/**
 * @file ex1.c
 * @author Breno Lopes(www.github.com/zTrolly)
 * @date 2022-04-03
 */

#include<stdio.h>
#include<stdlib.h>

/*
Fazer um programa leia uma seqüência de valores inteiros fornecida pelo usuário em uma 
linha de entrada e conte o número de valores positivos, negativos e zeros. 
*/
int main()
{
  // iniciar os valores com 0 para não dar pau quando foi incrementar
  int valorLeitura,  valoresPositivos=0,  valoresNegativos=0,  zeros=0;
  printf("Quantos numeros vao ser lidos?\n");
  scanf("%d",&valorLeitura);

  for (int i =0; i < valorLeitura; i++)
  {
    int temp;// variavel temporaria que recebe o numero pra ser comparado
    printf("Digite um numero\n");
    scanf("%d",&temp);
    if (temp > 0){
      valoresPositivos++; // ++ serve pra aumentar um valor ja existente, por isso inicia com 0
    }else if(temp < 0){
      valoresNegativos++;
    }else{
      zeros++;
    }
  }
  printf("valores positivos -> %d\n", valoresPositivos);
  printf("valores negativos -> %d\n", valoresNegativos);
  printf("numero de zeros ->   %d\n", zeros);

  return 0;
}

/*

WHILE(BATATA){
  CODIGO
}

FOR(CONDICAO i < 10 ){
  CODIGO
  codigo2 codigo3

}


*/