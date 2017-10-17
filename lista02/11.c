/* lista 2 exercicio 11
 * (Problema) Faca um programa que converta um numero decimal para binario e vice-versa (decimal para binario
 * opcao 1, binario para decimal opcao 2).
 *
 * Autor: Marcos Seiti Suzuki
 * Data: 16/10/2017
 */

#include <stdio.h>

int binario ( int valor, int i ) {

    if ( !valor ) return 0;

    return valor%2*i + binario (valor/2, i*10);

}

int decimal ( int valor, int i ) {

    if ( !valor ) return 0;

    return valor%10*i + decimal ( valor/10, i*2 );

}

int conversor (int n, int opcao) {

    if (opcao==1) return binario(n, 1);
    if (opcao==2) return decimal(n, 1);

    return 0;

}

int main () {

    int n, opcao;

    scanf ("%d %d", &n, &opcao);

    printf ("%d\n", conversor ( n, opcao ) );

    return 0;

}
