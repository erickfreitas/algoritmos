#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
main(){
       setlocale(LC_ALL, "Portuguese");
       char resp = 's';
       int m = 0; int x = 1; int qtd_divisores = 0; int fatorial = 1; int soma = 0;
       while(resp == 's'){
            printf("Informe um valor: \n");
            scanf("%d", &m);
            if(m % 2 == 0){
                for(x = 1; x <= m; x++){
                    if(m % x == 0){
                        qtd_divisores++;
                    }
                }
                printf("O numero %d possui %d divisores. \n", m, qtd_divisores);
                qtd_divisores = 0;
            }
            if(m % 2 == 1 && m < 12){
                for(x = m; x >=1; x--){
                    fatorial = fatorial * x;
                }
                printf("O fatorial do número %d é %d. \n", m, fatorial);
                fatorial = 1;
            }
            if(m % 2 == 1 && m >= 12){
                for(x = 1; x <= m; x++){
                    soma = soma + x;
                }
                printf("A soma de todos o números inteiros de 1 até %d é de %d. \n", m, soma);
            }
            printf("Deseja informar outro número? (s/n)\n");
            scanf(" %c", &resp);
       }
}
