#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
main(){
       setlocale(LC_ALL, "Portuguese");
       char nome[50]; char nome_mais_alto[50];
       char sexo = ' ';
       double altura = 0; double peso = 0; double media_peso = 0; double mais_alto = 0;
       int x; int homem = 0; int mulher = 0; int percentual_h = 0; int percentual_m = 0; int peso_total = 0;
       for (x = 1 ; x <= 250; x = x + 1) {
            printf("Informe o nome da %dª pessoa. \n", x);
            scanf("%s", &nome);
            printf("Informe o sexo da %dª pessoa. \n", x);
            scanf(" %c", &sexo);
            printf("Informe a altura da %dª pessoa. \n", x);
            scanf("%lf", &altura);
            printf("Informe o peso da %dª pessoa. \n", x);
            scanf("%lf", &peso);
            if(sexo == 'm'){
                homem = homem + 1;
                percentual_h = (homem * 100) / 250;
            }else{
                mulher = mulher + 1;
                percentual_m = (mulher * 100) / 250;
            }
            if(mais_alto < altura){
                mais_alto = altura;
                strcpy(nome_mais_alto,nome);
            }
            peso_total = peso_total + peso;
       }
       media_peso = peso_total / 250;
       printf("%d pessoa(s) são homens e a porcentagem de homens é de %d%%. \n", homem, percentual_h);
       printf("%d pessoa(s) são mulheres e a porcentagem de mulheres é de %d%%. \n", mulher, percentual_m);
       printf("A média de peso das pessoas é de %.2lfKg. \n", media_peso);
       printf("A pessoa mais alta é %s com %.2lfM", nome_mais_alto, mais_alto);
}
