#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
main(){
       setlocale(LC_ALL, "Portuguese");
       double salario = 0;
       double financiamento = 0;
       printf("Informe o valor do salario. \n");
       scanf("%lf", &salario);
       printf("Informe o valor do financiamento pretendido. \n");
       scanf("%lf", &financiamento);
       if(financiamento <= (salario * 5)){
            printf("Financiamento concedido. \n");
       }
       else{
            printf("Financiamento negado. \n");
       }
       printf("Obrigado por nos consultar. \n");
       system("Pause");
}
