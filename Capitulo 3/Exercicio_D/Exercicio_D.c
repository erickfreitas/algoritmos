#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    float tempo, velocidade_media, distancia, combustivel;
    printf("Informe o tempo em minutos gasto na viagem. \n");
    scanf("%f", &tempo);
    printf("Informe a velocidade média do veiculo. \n");
    scanf("%f", &velocidade_media);
    distancia = (tempo / 60) * velocidade_media;
    combustivel = distancia / 12;
    printf("O tempo gasto na viagem foi de %.0f minutos.\nA velocidade média foi de %0.f.Km/h\nA distancia percorrida foi %2.fKM e a quantidade de combustivel gasta foi de %2.fL", tempo, velocidade_media, distancia, combustivel);
    system("Pause");
}
