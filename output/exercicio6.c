//Calcular o Fatorial de um Número
//Escreva um programa que calcule o fatorial de um número dado usando uma função.

#include <stdio.h>

int main(){
    
    //Definição de variaveis necessarias
    int  num;

    printf("FATORANDO NUMEROS INTEIROS!\n\n");
    printf("Digite um número para realizar o cálculo fatorial: ");
    scanf("%d", &num);// Solicita ao usúario para digitar o numero para calcular o fatorial

    //Função de cáculo do fatorial
    int fatorial(int num){
            if (num == 0 || num ==1) {
            return 1;        
            } else {
            return num * fatorial(num - 1);              
            }
        }

    //Exibe o fatorial do número digitado pelo usuario
    printf("O fatorial de %d é %d\n\n", num, fatorial(num)); 
}