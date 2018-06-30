#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int matrizA[15];
    int matrizB[15];
    int i, c, num, troca;

    for(i = 0; i < 15; i++){
        printf("Informe o %dº valor da matriz A. \n", i + 1);
        scanf("%d", &matrizA[i]);
        /* /////// Código de Fatorial  ///////*/
        num = matrizA[i];
        matrizB[i] = 1;
        for(num; num > 1; num--){
            matrizB[i] = matrizB[i] * num;
        }
        /* /////// Código de Fatorial  ///////*/
    }
    for(i = 0; i < 15; i++){
        for(c = 0; c < 15; c++){
            if(matrizB[i] < matrizB[c]){
                troca = matrizB[i];
                matrizB[i] = matrizB[c];
                matrizB[c] = troca;
            }
        }
    }
    for(i = 0; i < 15; i++){
        printf("Matriz B %dº valor:%d \n", i + 1, matrizB[i]);
    }
    system("Pause");
}

