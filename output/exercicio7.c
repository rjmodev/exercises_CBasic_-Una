//Encontrar o Maior e o Menor Elemento de um Array
//Faça um programa que leia 10 números inteiros em um array e exiba o maior e o menor valor.

#include <stdio.h>

int main(){
    int i, num[10], numMaior = 0, numMenor = 99999;


    printf("DIGITE 10 NUMEROS PARA CALCULAR O MAIOR E O MENOR DELES!!\n\n");
    for(i = 1; i <= 10; i++){  
        printf("DIGITE 10 NUMEROS PARA CALCULAR O MAIOR E O MENOR DELES!!\n\n");
        printf("Digite um valor para %d: ",i);
        scanf("%d", &num[i]);
    }
    
    for(i = 1; i <= 10; i++){
        printf("%d\n", num[i]);
        if(numMenor > num[i])
        numMenor = num[i];
        if(numMaior < num[i])
        numMaior = num[i];
    }
    
    printf("O menor valor é: %d. \nO maior valor é: %d", numMenor, numMaior);
    
    return 0;
    

}