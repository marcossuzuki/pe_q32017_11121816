/* lista 2 exercicio 14
 * (Problema) Faca um programa que diga se um numero inteiro inserido pelo usuario
 * eh palıdromo ou nao.
 *
 * Autor: Marcos Seiti Suzuki
 * Data: 16/10/2017
 */

#include <stdio.h>

int inverte ( int valor, int parcial ) {

    if ( !valor ) return parcial;

    return inverte ( valor/10, parcial*10 + valor%10 );

}

void palindromo ( int valor ) {

    if (valor == inverte ( valor, 0 ) ) printf ( "sim" );
    else printf ( "nao" );

    printf ( "\n" );

}

int main () {

    int n, opcao;

    scanf ("%d", &n);

    palindromo ( n );

    return 0;

}
