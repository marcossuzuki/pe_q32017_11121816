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

double termo_real ( double a, double b ) {

    return -b / ( 2.0*a );

}

double termo_imaginario ( double a, double d ) {

    return sqrt ( sqrt( d*d ) ) / ( 2*a );

}

void print_raiz (double real, double d, double imaginario) {

    if ( !d ) { 

        printf("%.2lf\n", real );

    } else if ( d > 0 ) {

        printf("%#.2lf ", real - imaginario );
        printf("%#.2lf\n", real + imaginario );

    } else {

        printf("%.2lf-%.2lfi ", real, imaginario);
        printf("%.2lf+%.2lfi\n", real, imaginario);

    }

}

void raizes (double a, double b, double c) {

    double real;
    double d;
    double imag;

    d = delta ( a, b, c );
    real = termo_real ( a, b );
    imag = termo_imaginario ( a, d );

    print_raiz (real, d, imag);

}

int main () {

    double a, b, c;

    scanf ("%lf %lf %lf", &a, &b, &c);
    raizes ( a, b ,c );

    return 0;

}
