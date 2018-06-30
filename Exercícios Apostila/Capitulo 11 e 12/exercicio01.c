#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
main(){
       setlocale(LC_ALL, "Portuguese");
       int cont_1 = 0 ; int cont_2 = 0; int cont_3 = 0; int cont_4 = 0 ;int numero = 0;
       char resp = 's';
       while(resp == 's'){
          printf("Insira um valor. \n");
          scanf("%d", &numero);
          printf("%d \n", numero);
          if(numero >= 0 && numero < 25){
             cont_1 = cont_1 + 1;
          } else if(numero >= 25 && numero < 50){
             cont_2 = cont_2 + 1;
          } else if(numero >= 50 && numero < 75){
             cont_3 = cont_3 + 1;
          } else if(numero >= 75 && numero < 100){
             cont_4 = cont_4 + 1;
          }
          printf("Deseja informar um outro número? (s/n) \n");
          scanf(" %c", &resp);
       }
       printf("Foi digitado %d número(s) entre 0 e 25. \n" , cont_1);
       printf("Foi digitado %d número(s) entre 25 e 50. \n", cont_2);
       printf("Foi digitado %d número(s) entre 50 e 75. \n", cont_3);
       printf("Foi digitado %d número(s) entre 75 e 100. \n", cont_4);
       system("Pause");
}
