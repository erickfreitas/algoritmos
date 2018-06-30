#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int  raiz;
    float base,resultado, indice;
    printf("Informe a base. \n");
    scanf("%f", &base);
    printf("Informe o índice da raiz. \n");
    scanf("%d", &raiz);
    indice = 0.5;
    resultado = pow(base, indice);
    printf("O resultado é %f \n", resultado);
    system("pause");
}
