#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    double raio, altura, volume;
    printf("Informe o valor da altura da lata. \n");
    scanf("%lf", &altura);
    printf("Informe o valor do raio da lata. \n");
    scanf("%lf", &raio);
    volume = 3.1415 * (raio * raio) * altura;
    printf("O volume da lata é de %.2lf", volume);
    system("Pause");
}
