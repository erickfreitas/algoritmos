#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    float num;
    printf("Informe um número. \n");
    scanf("%f", &num);
    printf("Valor ao quadrado: %.0f \n", num * num);
    system("Pause");
}
