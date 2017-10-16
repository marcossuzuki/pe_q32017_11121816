/* lista 2 exercicio 10
 * ((Problema) Dada uma array de int de tamanho 1000 chamada fibMem que eh acessıvel 
 * em qualquer ponto do programa. Modifique o algoritmo recursivo de Fibonacci visto em
 * aula para verificar se a array contem o valor de Fibonacci requisitado e, caso nao tenha,
 * preencha com tal valor.
 *
 * Autor: Marcos Seiti Suzuki
 * Data: 16/10/2017
 */

#include <stdio.h>

int fibMem [1000];

int fib ( int n ) {

    if ( n==0 ) return 0;
    if ( n<=2 ) return 1;

    /*altere a linha abaixo*/
    fibMem[n-1] = fib(n-1);
    fibMem[n-2] = fib(n-2);

    return fibMem[n-1] + fibMem[n-2];

}

int main () {

    int n;

    fibMem[1] = 1;
    fibMem[2] = 1;

    scanf ("%d", &n);
    printf ("%d\n", fib( n ) );

    return 0;

}
