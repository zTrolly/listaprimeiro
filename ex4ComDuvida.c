/**
 * @file ex4.c
 * @author Breno Lopes(www.github.com/zTrolly)
 * @date 2022-04-03
 */

#include<stdio.h>
#include<stdlib.h>

/*
Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o valor 
de E: 
 
E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + .... + 1 / N! 
*/
/**
 * @param E é simplesmente ele mesmo mais 1 sobre o fatorial de @param N 
 * 
*/
int main(){
int n;
    float fatorial = 1.0, E = 1.0;

    printf("Digite um numero -> \n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        fatorial *= i;
        E += 1.0/fatorial;
    }

    printf("O valor de E é -> %f\n", E);

  return 0;
}