
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    float matrizA[10];
    int c;
    float num;
    char resp = 's';
    bool encontrou = false;

    for(c = 0; c < 10; c++){
        printf("Informe o %dº valor da Matriz A. \n", c + 1);
        scanf("%f", &matrizA[c]);
    }
    while(resp == 's'){
        printf("Informe um valor à ser pesquisado na matriz A, \n");
        scanf("%f", &num);
        encontrou = false;
        for(c = 0; c < 10; c++){
            if(matrizA[c] == num){
                printf("O número %.1f está na posição %d da matriz A. \n", num, c + 1);
                encontrou = true;
            }
        }
        if(encontrou == false){
            printf("O número %.1f não foi encontrado na matriz A. \n", num);
        }
        printf("Deseja procurar outro número na matriz A? (s/n) \n");
        scanf(" %c", &resp);
    }
    system("Pause");
}

