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

        int  inteiro, decimal = 0, i = 1;

        inteiro = (int)valor;

        while( inteiro>0 )
        {

            decimal += (inteiro % 10) * i;
            i *= 2;
            inteiro /= 10;

        }

        return decimal;

    }

    return valor;

}

float binario ( int unidade, float valor ) {

    if ( unidade == 1 ) {

        int  inteiro, binaryInt = 0, i = 1;
        //float  binaryFract = 0, k =0.1f, fracao, temp1;
    
        inteiro = (int)valor;
        //fracao = valor - (int)valor;


        while( inteiro>0 )
        {

            binaryInt += inteiro % 2 * i;
            i *= 10;
            inteiro /= 2;

        }


      /* 
        while(k>0.00000001)
        {

            temp1 =  fracao *2;
            binaryFract += ((int)temp1)*k;
            fracao = temp1 - (int)temp1;
            k = k / 10;

        }
      */

        return binaryInt; //+ binaryFract;

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

void printvalor ( int tipo, int u_saida, float valor_c ) {

    if ( tipo == 1 ) {

        if ( u_saida  == 1 ) printf ( "%.2f C\n", valor_c );
        else if ( u_saida  == 2 ) printf ( "%.2f F\n", valor_c );
        else if ( u_saida  == 3 ) printf ( "%.2f K\n", valor_c );

    } else {

        if ( u_saida  == 1 ) printf ( "%.2F\n", valor_c);
        else if ( u_saida  == 2 ) printf ( "%.0F\n", valor_c);

    }

}

int main () {

    int tipo, u_entrada, u_saida;
    float valor, valor_c;

    scanf ("%d %d %d %f", &tipo, &u_entrada, &u_saida, &valor);
    valor_c = conversor ( tipo, u_entrada, u_saida, valor );

    printvalor ( tipo, u_saida,  valor_c);

    return 0;

}
