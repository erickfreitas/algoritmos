#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int A, B, C, D;
    printf("Informe um valor para A. \n");
    scanf("%d", &A);
    printf("Informe um valor para B. \n");
    scanf("%d", &B);
    printf("Informe um valor para C. \n");
    scanf("%d", &C);
    printf("Informe um valor para D. \n");
    scanf("%d", &D);
    printf("valor de A + B � %d.\n", A + B);
    printf("valor de A + C � %d.\n", A + C);
    printf("valor de A + D � %d.\n", A + D);
    printf("valor de B + C � %d.\n", B + C);
    printf("valor de B + D � %d.\n", B + D);
    printf("valor de C + D � %d.\n", C + D);

    printf("valor de A x B � %d.\n", A * B);
    printf("valor de A x C � %d.\n", A * C);
    printf("valor de A x D � %d.\n", A * D);
    printf("valor de B x C � %d.\n", B * C);
    printf("valor de B x D � %d.\n", B * D);
    printf("valor de C x D � %d.\n", C * D);
    system("pause");
    }
