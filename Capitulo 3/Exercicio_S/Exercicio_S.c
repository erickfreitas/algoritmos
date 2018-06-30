#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    float A, B;
    printf("Informe o valor de A. \n");
    scanf("%f", &A);
    printf("Informe o valor de B. \n");
    scanf("%f", &B);
    printf("A + B = %.1f \n", A + B);
    printf("A - B = %.1f \n", A - B);
    printf("A x B = %.1f \n", A * B);
    printf("A / B = %.1f \n", A / B);
    system("Pause");
}
