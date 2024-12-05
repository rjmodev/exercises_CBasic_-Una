//Imprimir a Tabela de Multiplicação
//Faça um programa que solicite ao usuário um número e imprima a tabela de 
//multiplicação desse número até 10.

#include <stdio.h>
int main (){
    // declarando as variaveis necessarias
    int i , num = 0, result;

    //Solicita ao usuário o número para verificacao realizar o calculo
    printf("TABELA DE MULTIPLICAÇÃO DE UM NÚMERO DE 0 A 10.\n\n");
    printf("Digite o número desejado para realizar o calculo: ");
    scanf("%d", &num);

    for ( i = 0; i <= 10; i++){
        result = num * i;
        printf("O resultado da multiplicação de %d x %d é %d \n", num, i, result); 
    }
    return(0);
}