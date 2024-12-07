//Contar o Número de Vogais em uma String
//Crie um programa que conte o número de vogais (a, e, i, o, u) em uma string fornecida pelo usuário.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    
    //Definição de variaveis necessarias
    char nomeSobrenome[100];
    int i, vogais = 0;

    // Solicita ao usuário que escreva seu nome e sobrenome para verificar a quantidade de vogais
    printf("VERIFICAÇÃO E CONTAGEM DE VOGAIS NO NOME E SOBRENOME\n\n");
    printf("Digite seu nome e sobrenome: ");
    fgets(nomeSobrenome, sizeof(nomeSobrenome), stdin);

    // Contando o numero de vogais usando o laço for
    for (i = 0; nomeSobrenome[i] != '\0'; i++) {
        char c = tolower(nomeSobrenome[i]); // Converte para minúsculo para comparar
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais++;
        }
    }

    // Imprime na tela a quantidade de vogais no nome e sobrenme
    printf("O número de vogais no seu nome e sobrenome é: %d\n", vogais);

    return 0;
}