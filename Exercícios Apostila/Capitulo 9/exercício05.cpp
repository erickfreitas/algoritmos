#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
main(){
       setlocale(LC_ALL,"Portuguese");
       char piloto[50];
       int distancia;
       int tempo;
       int velocidade;
       printf("Informe o nome do piloto. \n");
       gets(piloto);
       printf("Informe a dist�ncia percorrida. \n");
       scanf("%d", &distancia);
       printf("Informe o tempo gasto no percurso em horas. \n");
       scanf("%d", &tempo);
       velocidade = distancia / tempo;
       printf("A valocidade m�dia do %s foi %d Km/h. \n", piloto, velocidade);
       system("Pause");
}
