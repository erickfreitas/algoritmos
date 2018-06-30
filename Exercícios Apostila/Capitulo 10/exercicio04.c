#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
main(){
       setlocale(LC_ALL, "Portuguese");
       double salario = 0; double salario_novo = 0;
       char funcionario[50];
       double aumento = 0;
       int percentual = 0;
       printf("Informe o nome do funcionário(a). \n");
       gets(funcionario);
       printf("Informe o valor do salário de %s.", funcionario);
       scanf("%lf", &salario);
       if(salario > 0 && salario <= 400){
            aumento = 1.15; percentual = 15;
       }else if(salario > 400 && salario <= 700){
            aumento = 1.12; percentual = 12;
       }else if(salario > 700 && salario <= 1000){
            aumento = 1.1; percentual = 10;
       }else if(salario > 1000 && salario <= 1800){
            aumento = 1.07; percentual = 7;
       }else if(salario > 1800 && salario <= 2500){
            aumento = 1.04; percentual = 4;
       }else{
            aumento = 1.00; percentual = 0;
       }
       salario_novo = salario * aumento;
       printf("Nome: %s \nPorcentagem: %d%% \nSalario atual: %2.lf \nSalario corrigido: %2.lf \n",funcionario, percentual, salario, salario_novo);
       system("Pause");
}
