#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
main(){
       setlocale(LC_ALL, "Portuguese");
       char vendedor[50];
       double salario; double vendas; double percentual; double salario_total;
       printf("Informe o nome do vendedor(a). \n");
       gets(vendedor);
       printf("Informe o salário do vendedor. \n");
       scanf("%lf", &salario);
       printf("Informe o valor de vendas feito pelo vendedor. \n");
       scanf("%lf", &vendas);
       printf("Informe o valor que o vendedor ganha sobre as vendas em %%.\n");
       scanf("%lf", &percentual);
       salario_total = salario + (vendas * (percentual / 100));
       printf("O salário de %s é de R$%.2lf \n", vendedor, salario_total);
       system("Pause");
       }
