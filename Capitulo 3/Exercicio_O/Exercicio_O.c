#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int A, B, C, D, P, S;
    printf("Informe o valor para A. \n");
    scanf("%d", &A);
    printf("Informe o valor para B. \n");
    scanf("%d", &B);
    printf("Informe o valor para C. \n");
    scanf("%d", &C);
    printf("Informe o valor para D. \n");
    scanf("%d", &D);
    P = A * C;
    S = B + D;
    printf("O valor de P:%d\nO valor de S:%d \n", P, S);
    system("Pause");
}
