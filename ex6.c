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




/**
 * soma = soma(do index anerior) + soma(no index atual)
 * 
 * soma = soma + 1/i
 * 
 * 
 * 0
 *  soma = 1
 *  i++
 * 1
 *  soma = 1 + 1/2
 *  i++
 * 2
 * soma = 1 + 1/2 + 1/3
 * i++
 * 
 * 
 */



/*
  1.o 2.o
0 1   1    2 3 5 8 13 21 ... 

fibonnaci = n + n-1
          2.o   1.o



valor 15 fibo 1

 14 + 13




 0 1 1 2 3 5 8 13 21 34 56 90 ...............

*/