#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    char sexo;
    char nome[10];
    bool cond = true;
    printf("Informe o nome. \n");
    scanf("%s", nome);
    while (cond == true){
        printf("Informe o sexo (m/f). \n");
        sexo=getchar();
        if(sexo == 'm' || sexo == 'f'){
            cond = false;
        }
        else{
            printf("Sexo informado é invalido. \n");
        }
    }
    if(sexo == 'm'){
        printf("IImo. Sr %s", nome);
    }else{
        printf("IImo. Sra %s", nome);
    }
    system("pause");
}


