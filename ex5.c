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
  float mediaSalPopu = 0,
        mediaNumFilhos = 0,
        maiorSalario = 0,
        percentAte100 = 0,
        salario = 0, // dentro do loop vai ser sobrescrito -> temp
        valorTotalSalario = 0; // vai ser incrementado dentro do loop

  int numFilhos = 0,
      totalFilhos = 0,//contador
      pessoas = 0, //contador
      contadorSal100 = 0;

  while(salario >= 0){
      printf("Digite seu salario -> ");
      scanf("%f", &salario);
     
      if(salario < 0){
        break; //nn é bom fazer isso
      }

      printf("Digite a quantidade de filhos -> ");
      scanf("%d", &numFilhos);

      totalFilhos += numFilhos; //incrementa o numero total de filhos

    if(salario >= 0){ //para evitar que contabilize o salario mesmo ele sendo negativo
      valorTotalSalario += salario;
      pessoas++; //contador para fazer média
    }

    if(salario <= 100){
      contadorSal100++;
    }

    if(salario > maiorSalario){
      maiorSalario = salario; // maiorSalario -> variavel aux 
      //99 > maiorSalario
      //ent maior salario recebe o 99
      // ...
      // ...
      // ..
      // 1000 > 99
      // ent maior salrio recebe 1000
    }
  }

  mediaNumFilhos = totalFilhos / (pessoas * 1.0); //calc media filhos
  mediaSalPopu =  valorTotalSalario / (pessoas * 1.0); //calc media do salario
  percentAte100 = contadorSal100 / (pessoas * 1.0) * 100.0; //porcentagem de pessoas com salrio menor que cem

  printf("A media do salario da populacao eh -> %.2f\n", mediaSalPopu);
  printf("A media de filhos da populacao eh  -> %.2f\n",mediaNumFilhos);
  printf("O maior salario eh -> %.2f\n", maiorSalario);
  printf("O percentual de pessoas com salario até 100 eh -> %.2f%%\n", percentAte100);

  return 0;
}