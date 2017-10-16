/* lista 2 exercicio 4
 * Com os conhecimentos obtidos na lista 01 faca um programa calculadora, este programa
 * deve receber uma operacao e apos saber a operacao os valores em ponto flutuante (float)
 * devem ser inseridos.  A calculadora deve conter as operacoes de soma (x+y) (opcao 1),
 * subtracao (x−y) (opcao  2), multiplicacao (x*y) (opcao  3), divisao (x/y) (opcao  4)  e 
 * potenciacao (x^y) (opcao 5).  Cada operacao deve ser encapsulada em uma funcao.  Toda
 * saıda do tipo ponto flutuante deve ter apenas duas casas decimais.
 *
 * Autor: Marcos Seiti Suzuki
 * Data: 15/10/2017
 */


#include <stdio.h>
#include <math.h>


double soma (double x, double y) {

    return x+y;

}

double subtracao (double x, double y) {

    return x-y;

}

double multiplicacao (double x, double y) {

    return x*y;

}

double divisao (double x, double y) {

    return x/y;

}

double potenciacao (double x, double y) {

    return pow(x,y);

}

double calculadora (int op, double x, double y) {

    switch ( op ) {
        case 1:
            return soma (x,y);
        case 2:
            return subtracao(x,y);
        case 3:
            return multiplicacao(x,y);
        case 4:
            return divisao(x,y);
        case 5:
            return potenciacao(x,y);
        default:
            return 0;

    }

}

int main () {

    double x, y;
    int op;

    scanf ("%d %lf %lf", &op, &x, &y);
    printf ("%.2G\n", calculadora(op, x,y));

    return 0;

}
