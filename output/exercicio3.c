//Verificar se um Número é Primo
//Escreva um programa que verifique se um número fornecido pelo usuário é um número primo.

#include <stdio.h>
#include <stdlib.h>
int main(){
    
    //definição das váriaveis necessárias
    int num, i;
    int primo = 1; // Váriavel definida para a condição verdadeiro de numero primo

    //Solicita ao usuário o número para verificacao 
    printf("Verificação de números primos.\nDigite um número inteiro positivo para verificar: ");
    scanf("%d", &num);

    // Para condição de número negativo imprime a informação de invalido
    if(num < 0){
    printf("Número inválido.\n\n");
    }

    // Verificando se é 0 ou 1 para nao dar um positivo-falso
    else if((num == 0) || (num == 1)){
    printf("Número válido, mas não é primo.\n\n");
    }
    // Testando se o número é primo
    else {
    for (i = 2; i <= (num / 2); i++){
            if (num % i == 0) {
            primo = 0; 
            break;
            }
        }
        //Imprime na tela o resultado da verificação pelo código 
        if(primo){
        printf("O número %d é primo\n", num);
        }
        else{
        printf("O número %d não é primo\n", num);
        }
    }
  return (0);
}