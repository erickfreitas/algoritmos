#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    float velocidade, distancia, tempo;
    printf("Informe a distância percorrida pelo projétil em KM. \n");
    scanf("%f", &distancia);
    printf("Informe o tempo que o projétil percorreu em minutos. \n");
    scanf("%f", &tempo);
    velocidade = (distancia * 1000) / (tempo * 50);
    printf("A velocidade do projétil é de %.1fMt/s. \n", velocidade);
    system("Pause");
}
