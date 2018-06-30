#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int A, B, troca;
    printf("Informe o valor de A. \n");
    scanf("%d", &A);
    printf("Informe o valor de B. \n");
    scanf("%d", &B);
    troca = A;
    A = B;
    B = troca;
    printf("O valor de A é %d e o valor de B é %d. \n", A, B);
    system("Pause");
}
