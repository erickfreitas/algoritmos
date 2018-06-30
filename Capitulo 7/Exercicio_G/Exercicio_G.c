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
    int k, g, troca, pesq;
    char resp = 's';
    bool condi = false;

    for(k = 0; k < 20; k++){
        printf("Informe o %dº valor da matriz A. \n", k + 1);
        scanf("%d", &matrizA[k]);
        matrizB[k] = matrizA[k] + 2;
    }

    for(k = 0; k < 20; k++){
        for(g = 0; g < 20; g++){
            if(matrizB[k] < matrizB[g]){
                troca = matrizB[k];
                matrizB[k] = matrizB[g];
                matrizB[g] = troca;
            }
        }
    }
   while(resp == 's'){
        printf("Informe um valor para ser pesquisado na matriz B. \n");
        scanf("%d", &pesq);
        condi = false;
        for(k = 0; k < 20; k++){
            if(matrizB[k] == pesq){
                printf("O número %d está na posição %d na matriz B. \n", pesq, k + 1);
                condi = true;
                break;
            }
        }
        if(condi == false){
            printf("O valor digitado não  foi encontrado na matriz B. \n");
        }
        printf("Deseja pesquisar outro número na matriz B? (s/n)\n");
        scanf(" %c", &resp);
   }
   system("Pause");
}

