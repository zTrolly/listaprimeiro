/**
 * @file ex9.c
 * @author Breno Lopes(www.github.com/zTrolly)
 * @date 2022-04-03
 */

#include<stdio.h>
#include<stdlib.h>
/*
Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto, mandou digitar uma linha para cada mercadoria com o preço de compra e de venda de cada uma. A última linha contém preço de compra igual a 0. Escreva um programa que:
a) Determine e escreva quantas mercadorias proporcionaram: 

i) Lucro < 10%
ii) 10% <= lucro <= 20%
iii) Lucro > 20%

b) Determine e escreva o valor total de compra e de venda de todas as mercadorias, assim como o lucro total.

*/
int main() {
  int contadorMenor10 = 0,
      contadorEntre10e20 = 0,
      contadorMaior20 = 0;

    float valorCompra,
          valorVenda,
          totalCompra = 0,
          totalVenda = 0;
  
  for (;;){

    printf("Digite o valor de compra -> ");
    scanf("%f", &valorCompra);

    if(valorCompra == 0){break;}

    printf("Digite o valor de venda -> ");
    scanf("%f", &valorVenda);

    totalCompra += valorCompra;
    totalVenda  += valorVenda;

    if(valorVenda > valorCompra * 1.2){
      contadorMaior20++;
    }else if (valorVenda < valorVenda *1.1){
      contadorMenor10++;
    }else{
      contadorEntre10e20++;
    }
  }

  printf("Quantidade de vendas com lucro menor que 10%%-> %d\n", contadorMenor10);
  printf("Quantidade de vendas com lucro entre 10%% e 20%%-> %d\n", contadorEntre10e20);
  printf("Quantidade de vendas com lucro entre 20%%-> %d\n", contadorMaior20);
  printf("Valor total de vendas -> %.2f\n", totalVenda);
  printf("Valor total de compras -> %.2f\n", totalCompra);


  if(totalVenda - totalCompra > 0){
    printf("\nO lucro total foi de %.2f\n", totalVenda - totalCompra);
  }else{
    printf("\nO prejuizo total foi de %.2f\n", totalVenda - totalCompra);
  }


}