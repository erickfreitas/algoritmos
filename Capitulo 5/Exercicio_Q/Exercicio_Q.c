
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    char resp = 's';
    char comodo[15];
    int largura = 0; int comprimento = 0;
    int area = 0; int area_total = 0;
    while(resp == 's'){
        printf("Informe o nome do comodo. \n");
        scanf(" %s", comodo);
        printf("Informe o comprimento do(a)  %s. \n", comodo);
        scanf("%d", &comprimento);
        printf("Informe a largura do(a)  %s. \n", comodo);
        scanf("%d", &largura);
        area = comprimento * largura;
        printf("A area do(a)  %s é de %d metros. \n", comodo, area);
        printf("Deseja informa os valores de mais um comodo? \n");
        scanf(" %c", &resp);
        area_total = area_total + area;
    }
    printf("O valor da área total da casa é de %d Metros. \n", area_total);
    system("Pause");
}
