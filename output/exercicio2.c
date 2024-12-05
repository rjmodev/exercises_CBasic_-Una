//Calcular a Soma de Números de 1 a N
//Crie um programa que solicite ao usuário um número N e calcule a soma de todos os números de 1 a N.

#include <stdio.h>
#include <stdlib.h>
 
int main()
{   //Definição das variáveis necessárias
    int i, numero, result = 0 ;

    //Uso do laço de repetição DO-WHILE 
    //Inicialmente solicita ao usuario que digite um número e programa leia ele
    do{
        printf("Digite o valor de um número inteiro: ");
        scanf("%d", &numero);

    //Repete o loop while se o numero digitado for menor que 1 
    }while ( numero < 1);
    
    //Uso do laco for para somar  todos os números de 1 até o valor digitado pelo usuario
    for( i = 1; i <= numero; i++)
    result = result + i; //Soma do resultado com o valor do iterador 'i', na variavel 'result' a cada iteracao

    //Exibe imprimindo o resultado final da soma recursiva
    printf("A soma recursiva de 1 ate %d é %d\n", numero, result );

    return (0);
}