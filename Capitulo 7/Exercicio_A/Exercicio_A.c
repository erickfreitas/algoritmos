#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int numeros[12];
    int i, c, troca;
    for(i = 0; i < 12; i++){
        printf("Informe o %dº valor:", i +1);
        scanf("%d", &numeros[i]);
    }
    for(c = 0; c < 12; c++){
        for(i = 0; i < 12; i++){
            if(numeros[c] > numeros[i]){
                troca = numeros[c];
                numeros[c] = numeros[i];
                numeros[i] = troca;
            }
        }
    }
    for(i = 0; i < 12; i++){
        printf("%dº valor: %d\n", i + 1, numeros[i]);
    }
    system("Pause");
}

