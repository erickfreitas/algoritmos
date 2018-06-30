#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
       setlocale(LC_ALL,"Portuguese");
       double raio; double altura; double volume;
       printf("Informe o valordo raio da caixa d'agua: \n");
       scanf("%lf", &raio);
       printf("Informe o valor da altura da caixa d'agua: \n");
       scanf("%lf", &altura);
       volume = 3.141592 * (raio * raio) * altura;
       printf("O volume da caixa d'agua é de %.2lfcm³ , \n", volume);
       system("Pause");
       }
