#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int A, S, C, total;
    printf("Informe o valor para A. \n");
    scanf("%d", &A);
    printf("Informe o valor para S. \n");
    scanf("%d", &S);
    printf("Informe o valor para C. \n");
    scanf("%d", &C);
    total = A * A + S * S + C * C;
    printf("A soma dos quadrados de A,S e C é %d \n", total);
    system("Pause");
}
