#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

main(){
       setlocale(LC_ALL, "Portuguese");
       char nome[50];
       int horas; int qtd_filhos; int x = 1;
       double valor_hora; double salario; double adicional;
       printf("Informe o nome do funcionario(a). \n");
       gets(nome);
       printf("Informe a quantidade de horas trabalhadas. \n");
       scanf("%d", &horas);
       printf("Informe o valor recebido por hora trabalhada. \n");
       scanf("%lf", &valor_hora);
       printf("Informe a quantidade de filhos que  %s possui. \n", nome);
       scanf("%d", &qtd_filhos);
       salario = (horas * valor_hora);
       adicional = salario * 0.03;
       while( x <= qtd_filhos){
           salario = salario + adicional;
           x = x + 1;
       }     
       printf("O salário a ser pago ao funcionário %s é de %.2lf. \n", nome, salario);
       system("Pause");
       }
