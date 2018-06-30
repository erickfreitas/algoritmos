
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    char matrizA[5];
    char matrizB[10];
    char matrizC[15];
    int c, i;
    char troca;

    for(c = 0; c < 5; c++){
        printf("Informe o %dº caracter da Matriz A. \n", c + 1);
        scanf(" %c", &matrizA[c]);
    }
    for(c = 0; c < 10; c++){
        printf("Informe o %dº caracter da Matriz B. \n", c + 1);
        scanf(" %c", &matrizB[c]);
    }
    for(c = 0; c < 5; c++){
        matrizC[c] = matrizA[c];
    }
    for(c = 0; c < 10; c++){
        matrizC[c + 5] = matrizB[c];
    }
    for(c = 0; c < 15; c++){
        for(i = 0; i < 15; i++){
            if(matrizC[c] > matrizC[i]){
                troca = matrizC[c];
                matrizC[c] = matrizC[i];
                matrizC[i] = troca;
            }
        }
    }
    for(c = 0; c < 15; c++){
        printf("Matriz C %dº valor: %c \n", c + 1, matrizC[c]);
    }
    system("Pause");
}

