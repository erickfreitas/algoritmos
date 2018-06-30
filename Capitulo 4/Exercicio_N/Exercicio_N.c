#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int A, B, C;
    printf("Informe o valor de A. \n");
    scanf("%d", &A);
    printf("Informe o valor de B. \n");
    scanf("%d", &B);
    printf("Informe o valor de C. \n");
    scanf("%d", &C);
    if((A + B + C) > 100){
        printf("Soma: %d \n",A + B + C);
    }
    system("pause");
}


