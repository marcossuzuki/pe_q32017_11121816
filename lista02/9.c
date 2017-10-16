/* lista 2 exercicio 9
 * (Problema) Faca um programa que calcule a potencia (x^y)
 * de  inteiros  inseridos  na forma x y.
 *
 * Autor: Marcos Seiti Suzuki
 * Data: 16/10/2017
 */


#include <stdio.h>

int pow2 (int x, int y) {

    if ( y == 0 ) return 1;

    return x * pow2 ( x, y-1 );

}

int main () {

    int x, y;
   
    scanf( "%d %d", &x, &y );

    printf ( "%d\n", pow2 ( x, y ) );

    return 0;

}
