/**
 * @file ex8.c
 * @author Breno Lopes(www.github.com/zTrolly)
 * @date 2022-04-03
 */

#include<stdio.h>
#include<stdlib.h>
/*
Faça  um  programa  que  imprima  os  L  primeiros  elementos  da  série  de  Fibonacci.  Por 
exemplo,  se  o  usuário  digitou  o  número  40,  deverão  ser  apresentados  os  40  números  da 
sequência na tela.

Fibonacci = n + n-1
0 1 1 2 3 5 8 13 ...
*/
int main() {
  long int a,b,c;
  int L,contador;

  printf("Digite quantos termos da sequencia de Fibonacci voce quer -> ");
  scanf("%d", &L);

  if (L <= 1) {
    printf("Numero de termos invalido\n");
  }
  else {
    a = 1;
    b = 1;
    contador = 4; //aumentar um para mostrar L - 1 elementos
    printf("0 - 1 - 1 - ");

    while(contador < L) {
      c = a + b;
      printf("%ld- ", c);
      a = b;
      b = c;
      contador = contador + 1;
    }
  }

  return 0;
}