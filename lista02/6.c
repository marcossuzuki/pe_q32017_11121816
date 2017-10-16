/* lista 2 exercicio 6
 * Faca um programa que encontre as raızes de uma funcao quadratica usando a formula
 * de Bhaskara. A entrada deve ser inserida como a sequencia dos coeficientes a, b e
 * c (tipo double) e o programa deve imprimir a equacao inserida e calcular as raızes, reais ou
 * complexas. As operacoes devem ser modularizadas em funcoes.  Toda saıda do tipo ponto
 * flutuante deve ter apenas duas casas decimais.
 *
 * Autor: Marcos Seiti Suzuki
 * Data: 15/10/2017
 */


#include <stdio.h>
#include <math.h>



double delta ( double a, double b, double c ) {

    return b*b - 4*a*c;

}

void raizes (double a, double b, double c) {

    double raiz;
    double d;
    double imag;

    d = delta ( a, b, c );
    raiz = -b / ( 2.0*a );
    imag = sqrt ( sqrt( d*d ) );
    imag /= 2*a;

    if ( !d ) { 

        printf("%.2lf\n", raiz );

    } else if ( d >0 ) {

        printf("%#.2lf ", raiz - imag );
        printf("%#.2lf\n", raiz + imag );

    } else {

        printf("%.2lf-%.2lfi ", raiz, imag);
        printf("%.2lf+%.2lfi\n", raiz, imag);

    }

}

int main () {

    double a, b, c;

    scanf ("%lf %lf %lf", &a, &b, &c);
    raizes ( a, b ,c );

    return 0;

}
