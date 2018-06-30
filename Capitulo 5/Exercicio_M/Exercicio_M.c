#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    float num, soma, media, i;
    i = 1;
    while(i <= 10){
        printf("Informe o valor do %.0fº número. \n", i);
        scanf("%f", &num);
        soma += num;
        i++;
    }
    media = soma / 10;
    printf("Soma: %.1f \n", soma);
    printf("Média: %.1f \n", media);
    system("pause");
}
