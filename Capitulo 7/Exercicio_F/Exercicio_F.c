#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int matrizA[30];
    int matrizB[30];
    int i, c, troca;
    int num;
    char resp = 's';
    bool teste = false;

    for(i = 0; i < 30; i++){
        printf("Informe o %d� valor da Matriz A: ", i + 1);
        scanf("%d", &matrizA[i]);
        matrizB[i] = matrizA[i] * matrizA[i] * matrizA[i];
    }

    while(resp == 's'){
        printf("Informe um valor a ser pesquisado na matriz B. \n");
        scanf("%d", &num);
        teste = false;
        for(i = 0; i < 30; i++){
            if(num == matrizB[i]){
                printf("O valor %d est� na posi��o %d da matriz B. \n", num, i + 1);
                teste = true;
                break;
            }
        }
        if(teste == false){
            printf("Valor %d n�o foi encontrado na matriz B. \n", num);
        }
        printf("Deseja procurar outro valor na matriz B? (s/n)\n");
        scanf(" %c", &resp);
    }
    system("Pause");
}

