#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    float valor, prestacao, taxa, tempo;
    printf("Informe o valor do bem a ser pago. \n");
    scanf("%f", &valor);
    printf("Informe o porcentagem da taxa de juros. \n");
    scanf("%f", &taxa);
    printf("Informe o tempo de pagamento (Mês). \n");
    scanf("%f", &tempo);
    prestacao = valor+(valor * (taxa / 100) * tempo);
    printf("O valor da prestação é de R$%.2f.", prestacao);
    system("pause");
}
