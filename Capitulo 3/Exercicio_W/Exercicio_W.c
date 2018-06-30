#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    float pes, metros;
    printf("Informe o valor em pés. \n");
    scanf("%f", &pes);
    metros = pes / 3.2808;
    printf("Metros: %.4f.\nPés: %.0f \n", metros, pes);
    system("pause");
}
