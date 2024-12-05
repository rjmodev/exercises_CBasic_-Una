//Inverter uma String
//Crie um programa que leia uma string fornecida pelo usuário e a imprima invertida.

#include <stdio.h>
#include <string.h> 

int main(){
    //definição das váriaveis necessárias
    char nome[100];
    int i, length;
    printf("INVERTENDO NOMES COM C\n\n");
    printf("Digite o nome e sobrenome: ");
    scanf("%99[^\n]", nome);

    // Obtendo o comprimento da string nome
    length = strlen(nome);

    // Exibe a string nome invertida
    printf("O nome invertido é: ");

    // Loop que começa no último caractere e vai até o primeiro
    for(i = length - 1; i >= 0; i--){
        printf("%c", nome[i]);         
    }
    printf("\n");
    return(0);
}