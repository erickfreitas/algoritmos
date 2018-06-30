#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    float f;
    int x;
    for(x = 10; x <= 100; x += 10){
        f = (9 * x + 160) / 5;
        printf("Celsius: %d \nFahrenheit: %.1f \n\n", x, f);
    }
    system("Pause");
}
