/**
 * @file ex5.c
 * @author Breno Lopes(www.github.com/zTrolly)
 * @date 2022-04-03
 */

#include<stdio.h>
#include<stdlib.h>

/*
A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o 
salário e número de filhos de cada habitante. A prefeitura deseja saber:  
 
a) média do salário da população;  
b) média do número de filhos;  
c) maior salário;  
d) percentual de pessoas com salário até R$100,00.  
 
O final da leitura de dados se dará com a entrada de um salário negativo.  
*/
int main(){
float mediaSalPopu = 0, mediaNumFilhos = 0, maiorSalario = 0, percentAte100 = 0, salario = 0, valorTotalSalario = 0;
int numFilhos, totalFilhos, contador;

while(salario >= 0){
    printf("Digite seu salario -> ");
    scanf("%f", &salario);

    printf("Digite a quantidade de filhos -> ");
    scanf("%d", &numFilhos);
    totalFilhos += numFilhos;

  if(salario > 0){
    valorTotalSalario += salario;
  }

}
  return 0;
}