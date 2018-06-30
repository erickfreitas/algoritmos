#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    float altura, comprimento, largura, volume;
    printf("Informe o valor da altura do retangulo em Centimetros.\n");
    scanf("%f", &altura);
    printf("Informe o valor do comprimento do retangulo em Centimetros.\n");
    scanf("%f", &comprimento);
    printf("Informe o valor da largura do retangulo em Centimetros.\n");
    scanf("%f", &largura);
    volume = altura * comprimento * largura;
    printf("O volume do retângulo é de %.2fcm³.\n", volume);
    system("pause");
}
