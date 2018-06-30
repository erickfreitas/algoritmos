#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    float cotacao, real, dolar;
    printf("Informe o valor da cotação do dolar. \n");
    scanf("%f", &cotacao);
    printf("Informe a quantidade de Dolares a ser convertido. \n");
    scanf("%f", &dolar);
    real = dolar * cotacao;
    printf("Dolar: U$$%.2f \nReal: R$%.2f \n", dolar, real);
    system("Pause");
}
