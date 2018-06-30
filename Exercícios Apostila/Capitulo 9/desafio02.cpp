#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
main(){
       setlocale(LC_ALL,"Portuguese");
       int valor = 0;
       int qtd_50 = 0; int qtd_20 = 0; int qtd_10 = 0; int qtd_5 = 0; int qtd_2 = 0; int qtd_1 = 0;
       printf("Informe o valor do troco.");
       scanf("%d", &valor);
       while(valor >= 50){
            qtd_50 = qtd_50 + 1;
            valor = valor - 50;
       }
        while(valor >= 20){
            qtd_20 = qtd_20 + 1;
            valor = valor - 20;
       }
        while(valor >= 10){
            qtd_10 = qtd_10 + 1;
            valor = valor - 10;
       }
        while(valor >= 5){
            qtd_5 = qtd_5 + 1;
            valor = valor - 5;
       }
        while(valor >= 2){
            qtd_2 = qtd_2 + 1;
            valor = valor - 2;
       }
        while(valor >= 1){
            qtd_1 = qtd_1 + 1;
            valor = valor - 1;
       }
       printf("São %d nota(s) de 50 reais. \n", qtd_50);
       printf("São %d nota(s) de 20 reais. \n", qtd_20);
       printf("São %d nota(s) de 10 reais. \n", qtd_10);
       printf("São %d nota(s) de 5 reais. \n", qtd_5);
       printf("São %d nota(s) de 2 reais. \n", qtd_2);
       printf("São %d nota(s) de 1 reais. \n", qtd_1);
       system("pause");
}
