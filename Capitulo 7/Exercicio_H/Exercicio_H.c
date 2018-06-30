#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int matrizA[20];
    int matrizB[20];
    int k, g, troca;

    for(k = 0; k < 20; k++){
        printf("Informe o %dº valor negativo da matriz A. \n", k + 1);
        scanf("%d", &matrizA[k]);
        if(matrizA[k] >= 0 ){
            matrizA[k] = matrizA[k] * (-1);
        }
        matrizB[k] = matrizA[k] * (-1);
    }

    for(k = 0; k < 20; k++){
        for(g = 0; g < 20; g++){
            if(matrizB[k] > matrizB[g]){
                troca = matrizB[k];
                matrizB[k] = matrizB[g];
                matrizB[g] = troca;
            }
        }
    }

    for(k = 0; k < 20; k++){
        printf("Matriz B:%d \n",matrizB[k]);
    }
    system("Pause");
}

