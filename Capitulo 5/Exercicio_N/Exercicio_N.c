#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    float num, soma = 0, media, cont = 0;
    num = 1;
    while(num > 0){
        printf("Informe o valor do %.0fº número. \n", cont + 1);
        scanf("%f", &num);
        if(num > 0){
            soma = soma + num;
        }
        cont++;
    }
    media = soma / (cont - 1);
    printf("Soma: %.1f \n", soma);
    printf("Média: %.1f \n", media);
    system("pause");
}
