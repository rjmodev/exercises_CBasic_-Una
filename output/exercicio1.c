//Verificar se um Número é Par ou Ímpar
//Escreva um programa que solicite ao usuário um número e verifique se ele é par ou ímpar.
#include <stdio.h>

int main()
{
    int number;
    printf("Verificando se o digitado é par ou ímpar!!");
    printf("Escreva um número inteiro para verificar: ");
    scanf ("%d", &number);
    if (number % 2== 0){
        printf("Verifiquei e consta que o %d é par!!", number);
    } else{
        printf("Verifiquei e consta que o %d é ímpar!!", number);    
    }
    return(0);
}
