/* lista 2 exercicio 12
 * (Problema) Faca um programa que calcule o coefiente binomial
 * (n k), o usuario deve inserir os valores inteiros n e k
 * e o programa deve retornar o resultado de (n k).
 * Faca ocalculo utilizando triangulo de Pascal.
 *
 * Autor: Marcos Seiti Suzuki
 * Data: 16/10/2017
 */

#include <stdio.h>

int pascal ( int n, int k ) {

    if ( !n || !k || k==n ) return 1;
    if ( k>n || k<0 ) return 0;

    return pascal ( n-1, k ) + pascal ( n-1, k-1 );

}


int main () {

    int n, k;

    scanf ( "%d %d", &n, &k );

    printf ( "%d\n", pascal ( n, k ) );

    return 0;

}
