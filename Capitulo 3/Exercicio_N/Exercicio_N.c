#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int A, B, C, total;
    printf("Informe o valor para A. \n");
    scanf("%d", &A);
    printf("Informe o valor para B. \n");
    scanf("%d", &B);
    printf("Informe o valor para C. \n");
    scanf("%d", &C);
    total = (A + B + C) * (A + B + C);
    printf("O quadrado da soma de A,B e C é %d \n", total);
    system("Pause");
}
