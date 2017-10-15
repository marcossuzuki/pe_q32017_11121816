/* lista 2 exercicio 2
 * Receba os valores em ponto flutuante 
 * de largura, comprimento e altura de um objeto
 * e calcule seu volume (a saída deve ter apenas duas casas decimais).
 *
 * Autor: Marcos Seiti Suzuki
 * Data: 15/10/2017
 */


#include <stdio.h>

float volume (float l, float c, float a) {

    return l*c*a;

}


int main () {

    float l, c, a;

    scanf ("%f %f %f", &l, &c, &a);
    printf ("%.2f\n", volume(l,c,a));

    return 0;

}
