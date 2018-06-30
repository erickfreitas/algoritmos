#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
main(){
       setlocale(LC_ALL, "Portuguese");
       int x ; int quad = 0; int cubo = 0; int i;
       int fatorial = 1; int qtd_divisores = 0;
       char *primo;
       printf("Numero\tQuadrado\tCubo\tFatorial\tDivisores\tPrimo\n");
       for(x = 1; x <= 10; x++){
            quad = x * x;
            cubo = x * quad;
            //calculando fatorial
            for(i = x; i >= 1; i--){
                fatorial = fatorial * i;
            }
            //Divisores
            for(i = 1; i <= x; i++){
                if(x % i == 0){
                    qtd_divisores++;
                }
            }
            if(qtd_divisores == 2 || qtd_divisores == 1){
                primo = "sim";
            }
            else{
                primo = "Não";
            }
            printf("%d\t%d\t\t%d\t%d\t\t%d\t\t%s\n" , x, quad, cubo, fatorial, qtd_divisores, primo);
            fatorial = 1;
            qtd_divisores = 0;
       }
       system("Pause");
}
