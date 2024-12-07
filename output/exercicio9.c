//Converter Temperatura de Celsius para Fahrenheit
//Escreva um programa que converta uma temperatura fornecida pelo usuário de graus Celsius para Fahrenheit.

#include <stdio.h>

int main(){
    
    //Definição de variaveis necessarias
    float tCel, tempFah;

    //Verifica a temperatura atual solicitando o usuario para digitar em graus Celsius
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &tCel);

    // Cálculo de conversão de Celsius para Fahrenheit
    tempFah = (tCel * 9 / 5) + 32;

    // Exibe o resultado em tempFah
    printf("A conversão da temperatura de Celsius para o valor em Fahrenheit é: %.2f\n", tempFah);

    return 0;

}