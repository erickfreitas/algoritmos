
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int matrizA[15];
    int c,num;
    char resp = 's';
    bool encontrou = false;

    for(c = 0; c < 15; c++){
        printf("Informe o %dº valor da Matriz A. \n", c + 1);
        scanf("%d", &matrizA[c]);
    }
    while(resp == 's'){
        printf("Informe um valor à ser pesquisado na matriz A, \n");
        scanf("%d", &num);
        encontrou = false;
        for(c = 0; c < 15; c++){
            if(matrizA[c] == num){
                printf("O número %d está na posição %d da matriz A. \n", num, c + 1);
                encontrou = true;
            }
        }
        if(encontrou == false){
            printf("O número %d não foi encontrado na matriz A. \n", num);
        }
        printf("Deseja procurar outro número na matriz A? (s/n) \n");
        scanf(" %c", &resp);
    }
    system("Pause");
}

