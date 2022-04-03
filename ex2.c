/**
 * @file ex2.c
 * @author Breno Lopes(www.github.com/zTrolly)
 * @date 2022-04-03
 */

#include<stdio.h>
#include<stdlib.h>

/*
Adaptar  o  programa  acima  para  que  ele  calcule  o  percentual  dos  valores  positivos, 
negativos e zeros em relação ao total de valores fornecidos. 
*/

//mesma coisa que o e anterior so muda a porcentagem
int main()
{
  int valorLeitura,  valoresPositivos=0,  valoresNegativos=0,  zeros=0;
  printf("Quantos numeros vao ser lidos?\n");
  scanf("%d",&valorLeitura);

  for (int i =0; i < valorLeitura; i++)
  {
    int temp;
    printf("Digite um numero\n");
    scanf("%d",&temp);
    if (temp > 0){
      valoresPositivos++;
    }else if(temp < 0){
      valoresNegativos++;
    }else{
      zeros++;
    }
  }

  float porcetagemPositivos, porcentagemNegativos, porcentagemZeros;

  // isso aqui vai retornar todos os valores como 00, testa ai depois
  // porcetagemPositivos = (valoresPositivos  / valorLeitura ) * 100;
  // porcentagemNegativos = (valoresNegativos  / valorLeitura ) * 100;
  // porcentagemZeros = (zeros  / valorLeitura ) * 100;
  
  //temos que multiplicar por 1.0 para o número sofrer uma mudança de int pra float para a conta bater
  porcetagemPositivos = (valoresPositivos * 1.0 / valorLeitura * 1.0) * 100;
  porcentagemNegativos = (valoresNegativos * 1.0 / valorLeitura * 1.0) * 100;
  porcentagemZeros = (zeros * 1.0 / valorLeitura * 1.0) * 100;

  // o %2.f mostra somente duas casas decimais do float
  printf("valores positivos -> %d\n Porcentagem positivos -> %2.f%% \n", valoresPositivos, porcetagemPositivos); 
  printf("valores negativos -> %d\n Porcentagem negativos -> %2.f%%\n", valoresNegativos, porcentagemNegativos);
  printf("numero de zeros   -> %d\n Porcentagem de zeros  -> %2.f%%\n",  zeros, porcentagemZeros);

  return 0;
}