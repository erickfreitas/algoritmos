#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
main(){
       setlocale(LC_ALL, "Portuguese");
       int nota = 0;
       printf("Informe a nota do aluno. \n");
       scanf("%d", &nota);
       if(nota < 3){
            printf("Aluno conceito E. \n");
       }
       else if(nota <= 5){
            printf("Aluno conceito D. \n");
       }
       else if(nota <= 7){
            printf("Aluno conceito C. \n");
       }
       else if(nota <= 9){
            printf("Aluno conceito B. \n");
       }
       else{
            printf("Aluno conceito A. \n");
       }
       system("Pause");
}
