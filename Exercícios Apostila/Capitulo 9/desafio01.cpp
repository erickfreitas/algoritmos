#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
main(){
       setlocale(LC_ALL,"Portuguese");
          int qtd_choop = 0, qtd_pizza = 0, qtd_cobertura = 0,qtd_cobertura_total = 0, qtd_pessoa = 0, cont = 1;
          double valor_total = 0, valor_pessoa = 0, valor_pizza =0, valor_cobertura = 0, valor_choop = 0;
          printf("Informe a quantidade de pessoas. \n");
          scanf("%d", &qtd_pessoa);
          printf("Informe a quantidade de choops. \n");
          scanf("%d", &qtd_choop);
          printf("Informe a quantidade de pizzas. \n");
          scanf("%d", &qtd_pizza);
              while(cont <= qtd_pizza){
                  printf("Informe a quantidade de cobertura para a %dª pizza. \n", cont);           
                  scanf("%d", &qtd_cobertura);
                  qtd_cobertura_total = qtd_cobertura_total + qtd_cobertura;
                  cont = cont + 1;
                }
          valor_pizza = qtd_pizza * 10;
          valor_choop = qtd_choop * 0.8;
          valor_cobertura = qtd_cobertura_total * 1.5;
          valor_total = (valor_pizza + valor_choop + valor_cobertura) * 1.10;
          valor_pessoa = valor_total / qtd_pessoa;
          printf("O valor gasto com pizza foi de %.2lf. \n", valor_pizza);
          printf("O valor gasto com choop foi de %.2lf. \n", valor_choop);
          printf("O valor gasto com cobertura foi de %.2lf. \n", valor_cobertura);
          printf("O valor total da conta é %.2lf. \n", valor_total);
          printf("o valor para cada pessoa é %.2lf. \n", valor_pessoa);
          system("Pause");
}
