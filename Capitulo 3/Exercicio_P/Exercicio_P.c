#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    float SM, NS, PR;
    printf("Informe o valor do sal�rio. \n");
    scanf("%f", &SM);
    printf("Informe o valor do percentual de reajuste. \n");
    scanf("%f", &PR);
    NS = SM + SM * (PR /100);
    printf("O valor do sal�rio com reajuste � de R$%.2f \n", NS);
    system("Pause");
}
