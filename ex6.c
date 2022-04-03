/**
 * @file ex6.c
 * @author Breno Lopes(www.github.com/zTrolly)
 * @date 2022-04-03
 */

#include<stdio.h>
#include<stdlib.h>
/*
Escreva um algoritmo que lê um valor n inteiro e positivo e que calcula a seguinte soma:  
 
S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n 
 
O algoritmo deve escrever cada termo gerado e o valor final de S.
*/
int main()
{
  int N;
  float S = 1.0;

  printf("Digite um numero inteiro e positivo -> ");
  scanf("%d",&N);

  for (int i = 2; i <= N; i++){
    S = S + 1.0/i;
    if ( i <= N-1){ // pra não ficar o valor final de s repetido no final
    printf("Valor de S -> %f \n", S);
    }
  }
  printf("Valor final de S -> %f\n", S);
  return 0;
}