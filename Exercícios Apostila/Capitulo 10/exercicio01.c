#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
main(){
       setlocale(LC_ALL, "Portuguese");
       int numero = 0;
       printf("Informe um valor. \n");
       scanf("%d", &numero);
       if(numero >=  0){
            if(numero % 2 == 0){
                printf("O valor informado � par. \n");
            }
            else{
                printf("O valor informado n�o � impar. \n");
            }
       }
       else{
            printf("O numero � negativo. \n");
       }
       system("Pause");
}
