/* lista 2 exercicio 1
 * Receba um valor inteiro e 
 * retorne 0 caso par e 1 caso ímpar.
 *
 * Autor: Marcos Seiti Suzuki
 * Data: 15/10/2017
 */


#include <stdio.h>

int impar (int n) {

    return n%2;

}


int main () {

    int n;

    scanf ("%d", &n);
    printf ("%d\n",impar(n));

    return 0;

}
