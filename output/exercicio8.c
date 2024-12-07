// Ordenar um Array de Números em Ordem Crescente

// Implemente um algoritmo de ordenação (como Bubble Sort) para ordenar um array de 
// números inteiros em ordem crescente.

#include <stdio.h>

int main(){

    //Definição de variaveis necessarias
    int numVt[6], numOrd; 
    int i, iOrg;

    //Laço para o usuario digitar 5 numeros e armazenar no array numVt[]
    printf("Digite as 5 menores notas abaixo de 100 dos alunos de medicina\n");
    printf("Pressione enter após digitar cada nota\n\n");

        for(i = 1; i < 6; i++){
            printf("Nota do aluno %d: ",i);
            scanf("%d", &numVt[i]);
        }

    //Imprime na tela a ordem atual dos numeros
    printf ("\nA ordem das notas digitada é: \n");
        for (i = 1; i < 6; i++){
            printf("%4d", numVt[i]);

        }

    //Algoritmo de Ordenacao Bubblesort
    for(iOrg = 1; iOrg < 6; iOrg++){
        for(i = 0; i < 6 - 1; i++){                
            if(numVt[i] > numVt[i + 1]){
                numOrd = numVt[i];
                numVt[i] = numVt[i + 1];
                numVt[i + 1] = numOrd;
            }
        }
    }

    //Imprimindo na tela a ordem crescent das notas
    printf("\n\nNotas estruturadas em ordem crescente: \n");
    for(i = 1; i < 6; i++){
        printf("%4d", numVt[i]);
    }

    return 0;
}