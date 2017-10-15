/* lista 2 exercicio 3
 * O  algoritmo  Gauss-Legendre  aproxima  o  valor  de Pi com  rapida  convergencia,  com
 * apenas 25 iteracoes ele consegue produzir os primeiros 45 milhoes de dıgitos. Comecando
 * com a = 1, b = 1√2, t = 1/4, p =  1, repete-se a seguinte sequencia de instrucoes ate
 * convergencia:
 * a1  =  ( a+b ) / 2
 * b =  r a i z ( a * b )
 * t =  t − p * ( a − a1 )^2
 * p =  2p
 * a =  a1
 * Ao final, Pi = ( a + b )^2 / (4t). Implemente esse algoritmo e busque os dıgitos de seu resultado
 * apos 10 repeticoes no site http://www.angio.net/pi/ Questoes para pensar:  os dıgitos sao
 * os mesmos?  O que pode impedir uma precisao arbitraria em seu codigo?
 * A saıda do algoritmo deve ser o valor de pi encontrado com 20 casas decimais.
 *
 * Autor: Marcos Seiti Suzuki
 * Data: 15/10/2017
 */


#include <stdio.h>
#include <math.h>


long double itera_pi (int n) {

    long double a=1.0;
    long double a1;
    long double b=1.0/sqrt(2);
    long double t=0.25;
    long double pi;
    int p=1;
    int i;


    for (i=0;i<n;i++) {
        a1=(a+b)/2.0;
        b=sqrt(a*b);
        t-=p*pow(a-a1,2);
        p*=2;
        a=a1;
        //printf ("%.30Lf %.30Lf %.30Lf %.30Lf\n", a1, b, t, a);
    }

    pi = pow(a+b,2);
    pi/=4*t;
    return pi;

}

long double pi () {

    return itera_pi(20);

}

int main () {

    printf ("%.20Lf\n", pi());

    return 0;

}
