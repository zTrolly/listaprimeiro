/**
 * @file ex3.c
 * @author Breno Lopes(www.github.com/zTrolly)
 * @date 2022-04-03
 */

#include<stdio.h>
#include<stdlib.h>

/*
Faça um programa que receba dez números e verifique se eles são divisíveis por 3 e 9 (ao 
mesmo  tempo),  por  2  e  por  5.  Caso  algum  número  não  seja  divisível  por  nenhum  desses 
números mostre a mensagem “Número não é divisível pelos valores”. Apresente também 
ao final a quantidade de números divisíveis por 3 e 9, por 2 e por 5. 
*/
int main(){
int divisivel39=0, divisivel2=0, divisivel5=0;


for (int i = 0; i < 10; i++)
{
  printf("Digite um numero -> ");
  int temp;
  scanf("%d", &temp);

  /**
   * % significa resto da divisao
   * ent a leitura seria assim "Se o resto da divisao de temp por 3 for zero..."
   * Aqui invés de usar um unico if e ir completanto com else if precisamos usar varios if's
   * Por exemplo se o número for 10 teria que incrementar tanto no @param divisivel5 e no @param divisivel2, se fosse usando else if so incrementaria na primeira comparação
   */


  /* testa ai dps!!!
  if (temp % 3 == 0 && temp % 9 == 0){ // operador && para fazer duas comparações
      divisivel39++;
    }else if (temp % 2 ==0){
      divisivel2++;
    }else if (temp % 5 == 0){
      divisivel5++;
    }else{
      printf("\nNúmero não é divisível pelos valores\n");
    }  
    */
  
  if (temp % 3 == 0 && temp % 9 == 0){ // operador && para fazer duas comparações
    divisivel39++;
  }

  if (temp % 2 ==0){
    divisivel2++;
  }

  if (temp % 5 == 0){
    divisivel5++;
  }else{
    printf("\nNúmero não é divisível pelos valores\n");
  }

  printf("\nQuantidade de numeros divisiveis por 3 e 9 -> %d\n", divisivel39);
  printf("Quantidade de numeros divisiveis por 2     -> %d\n", divisivel2);
  printf("Quantidade de numeros divisiveis por 5     -> %d\n", divisivel5);
}
  return 0;
}