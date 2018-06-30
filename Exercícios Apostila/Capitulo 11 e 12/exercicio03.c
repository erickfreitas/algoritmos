#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
main(){
       setlocale(LC_ALL, "Portuguese");
       int n, d, r, z=0, cont = 1;

   for (n = 2; n <= 500; n++) {
       for (d = 1; d < n; d++) {
           r = n%d;
           if (r == 0)
               z = z + d;
       }
       if (z == n){
           printf("%dº Numero Perfeito: %d\n",cont, n);
           cont++;
        }
       z = 0;
   }
}
