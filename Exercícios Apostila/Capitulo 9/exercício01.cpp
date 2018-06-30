# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

main(){
       setlocale(LC_ALL,"Portuguese");
       int a = 0; 
       int b = 0;
       int c = 0;
       double area_trapezio = 0, area_quadrado = 0, area_cubo = 0;
       //Lendo valores das variaveis
       printf("Informe um valor para A: \n");
       scanf("%d", &a);
       printf("Informe um valor para B: \n");
       scanf("%d", &b);
       printf("Informe um valor para C: \n");
       scanf("%d", &c);
       //Executando calculos
       area_trapezio = ((a * b) / 2) * c;
       area_quadrado = b * b;
       area_cubo = 6 * (c * c);
       //Exibindo resultado
       printf("O valor da área do Trapézio é de %.2lf. \n", area_trapezio);
       printf("O valor da área do Quadrado é de %.2lf. \n", area_quadrado);
       printf("O valor da área do Cubo é de %.2lf. \n", area_cubo);
       system("Pause");
       }
