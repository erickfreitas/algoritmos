
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
        printf("Informe o %d� valor da Matriz A. \n", c + 1);
        scanf("%d", &matrizA[c]);
    }
    while(resp == 's'){
        printf("Informe um valor � ser pesquisado na matriz A, \n");
        scanf("%d", &num);
        encontrou = false;
        for(c = 0; c < 15; c++){
            if(matrizA[c] == num){
                printf("O n�mero %d est� na posi��o %d da matriz A. \n", num, c + 1);
                encontrou = true;
            }
        }
        if(encontrou == false){
            printf("O n�mero %d n�o foi encontrado na matriz A. \n", num);
        }
        printf("Deseja procurar outro n�mero na matriz A? (s/n) \n");
        scanf(" %c", &resp);
    }
    system("Pause");
}

