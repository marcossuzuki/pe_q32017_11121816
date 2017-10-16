/* lista 2 exercicio 5
 * Faca um programa que calcule o coefiente binomial (n k), o usuario deve inserir os
 * valores inteiros n e k e o programa deve retornar o resultado de (n k). Dica: ( n k ) = n!/k!*(n−k)!
 * Obs.: O programa deve ter suas operacoes modularizadas em funcoes, ou seja, uma funcao
 * para calcular o fatorial e outra para calcular o coeficiente binomial.
 *
 * Autor: Marcos Seiti Suzuki
 * Data: 15/10/2017
 */


#include <stdio.h>
#include <math.h>



int fatorial ( int n ) {

    int fatorial=1;

    while ( n )
        fatorial*=n--;

    return fatorial;

}

int coef_binomial (int n, int k) {

    int binomial;
    
    binomial = fatorial ( n );
    binomial /= fatorial ( k );
    binomial /= fatorial ( n-k );

    return binomial;

}

int main () {

    int n, k;

    scanf ("%d %d", &n, &k);
    printf ("%d\n", coef_binomial ( n,k ) );

    return 0;

}
