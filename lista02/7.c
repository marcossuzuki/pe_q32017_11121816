/* lista 2 exercicio 7
 * Crie um programa conversor, da mesma forma que o problema 2, a entrada do usuario
 * deve ser o tipo  de  conversao, a unidade de entrada, a unidade de saıda
 * e o valor a ser convertido. Os valores usados  devem ser pontos flutuantes  
 * (float) e as operacoes de conversao devem ser modularizadas em funcoes.  Para o
 * tipo de conversao teremos duas opcoes, (opcao 1) temperatura e (opcao 2) base numerica.  
 * Na conversao de temperatura teremos 3 opcoes de valores de entrada e saıda:  
 * (opcao 1) Celsius, (opcao 2) Fahrenheit e (opcao  3) Kelvin. Para  
 * conversao de base numerica  teremos 2 opcoes  de valores de entrada e saıda : 
 * (opcao 1) Decimal, e (opcao 2) Binario. Toda saıda do tipo ponto
 * flutuante deve ter apenas duas casas decimais.
 *
 * Autor: Marcos Seiti Suzuki
 * Data: 15/10/2017
 */


#include <stdio.h>
#include <math.h>

float celsius ( int unidade, float valor ) {

    if ( unidade == 2 ) return  ( valor - 32 ) * 5/9;
    else if ( unidade == 3 ) return valor - 273.15;
    return valor;
    
}

float fahrenheit ( int unidade, float valor ) {

    if ( unidade == 1 ) return ( valor * 9.0/5.0 ) + 32.0;
    else if ( unidade == 3 ) return fahrenheit ( 1, celsius ( 3, valor ) );
    return valor;
    
}

float kelvin ( int unidade, float valor ) {

    if ( unidade == 1 ) return valor + 273.15;
    else if ( unidade == 2 ) return celsius ( 2, valor ) + 273.15;
    return valor;
    
}

float decimal ( int unidade, float valor ) {

    if ( unidade == 2 ) {
        float decimal;
        int cont = 1;

        while ( valor!=0 ) {



        }

        return decima;

    }

    return valor;

}

float binario ( int unidade, float valor ) {

    if ( unidade == 2 ) {
        float binario;
        int cont = 1;

        while ( valor!=0 ) {

            binario += ( valor % 2 ) * cont;
            valor/=2;
            cont *= 10;

        }

        return binario;

    }

    return valor;
    
}



float conversor_temp ( int u_entrada, int u_saida, float valor ) {

    switch ( u_saida ) {
        case 1:
            return celsius ( u_entrada, valor );
        case 2:
            return fahrenheit ( u_entrada, valor );
        case 3:
            return kelvin ( u_entrada, valor );
        default:
            return 0;

    }

}

float conversor_base ( int u_entrada, int u_saida, float valor ) {

    switch ( u_saida ) {
        case 1:
            return decimal ( u_entrada, valor );
        case 2:
            return binario ( u_entrada, valor );
        default:
            return 0;

    }

}


float conversor ( int tipo, int u_entrada, int u_saida, float valor ) {

    switch ( tipo ) {
        case 1:
            return conversor_temp ( u_entrada, u_saida, valor );
        case 2:
            return conversor_base ( u_entrada, u_saida, valor );
        default:
            return 0;

    }

}

int main () {

    double a, b, c;

    scanf ("%lf %lf %lf", &a, &b, &c);
    raizes ( a, b ,c );

    return 0;

}
