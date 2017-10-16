/* lista 2 exercicio 8
 * (Problema) Retornando ao problema 16 da lista 1, faca um programa que modularize
 * a solucao deste problema, ou seja, uma funcao para calcular os descontos e outra para
 * calcular os acrescimos, assim como uma funcao para clacular os salarios baseado nos
 * descontos e acrescimos.
 * 
 * Autor: Marcos Seiti Suzuki
 * Data: 16/10/2017
 */


#include <stdio.h>

double salario ( int cargo ) {

    double s[6] = {0, 10000.0, 8000.0, 5000.0, 3000.0, 2000.0};

    if ( cargo <= 5 && cargo >= 0 ) return s[cargo];

    return 0;

}

double descontos ( int falta, int cargo ) {

    return falta * salario ( cargo ) / 20.0;

}

double acrescimo ( int hora_extra, int cargo ) {

    return hora_extra * ( salario ( cargo ) / 160.0 + 40 );

}

double salario_final ( int hora_extra, int falta, int cargo ) {

    return salario ( cargo ) - descontos ( falta, cargo ) + acrescimo ( hora_extra, cargo );

}

int main() {

    int cargo, falta, hora_extra;
   
    scanf("%d %d %d", &cargo, &falta, &hora_extra);

    printf("%.0lf\n", salario_final ( hora_extra, falta, cargo ) );


    return 0;

}
