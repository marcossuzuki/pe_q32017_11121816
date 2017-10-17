/* lista 2 exercicio 13
 * (Problema) Faca um programa para achar o maximo divisor comum entre dois inteiros
 * inseridos pelo usuario.
 *
 * Autor: Marcos Seiti Suzuki
 * Data: 16/10/2017
 */

#include <stdio.h>

int mdc ( int x, int y ) {

    if ( !x ) return y;
    if ( !y ) return x;
    if ( x>=y ) return mdc ( y, x%y);
    if ( x<y ) return mdc ( x, y%x);


}


int main () {

    int x, y;

    scanf ( "%d %d", &x, &y );

    printf ( "%d\n", mdc ( x, y ) );

    return 0;

}
