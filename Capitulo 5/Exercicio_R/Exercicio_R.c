#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int maior, menor, num;
    printf("Informe valor:");
    scanf("%d", &num);
    maior = num;
    menor = num;
    while(num >= 0){
        printf("Informe valor:");
        scanf("%d", &num);
        if(maior < num && num >=0){
            maior = num;
        }
        if(menor > num && num >=0){
            menor = num;
        }
    }
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
}
