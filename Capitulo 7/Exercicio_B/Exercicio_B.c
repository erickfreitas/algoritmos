#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int matrizA[4];
    int matrizB[4];
    int i, num;
    char resp = 's';
    bool teste = false;

    for(i = 0; i < 8; i++){
        printf("Informe o %dº valor da matriz A. \n", i + 1);
        scanf("%d", &matrizA[i]);
        matrizB[i] = matrizA[i] * 5;
    }
    //for(i = 0; i < 4; i++){
    //    printf("matriz A:%d    matriz B:%d  \n", matrizA[i], matrizB[i]);
    //}
    while(resp == 's'){
        printf("Informe um valor a ser pesquisado na matriz B. \n");
        scanf("%d", &num);
        teste = false;
        for(i = 0; i < 8; i++){
            if(num == matrizB[i]){
                printf("O valor %d está na posição %d da matriz B. \n", num, i + 1);
                teste = true;
                break;
            }
        }
        if(teste == false){
            printf("Valor %d não foi encontrado na matriz B. \n", num);
        }
        printf("Deseja procurar outro valor na matriz B? (s/n)\n");
        scanf(" %c", &resp);
    }
    system("Pause");
}

