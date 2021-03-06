/* lista 4 exercicio 2
 * crie uma struct que represente um cronometro definido por minutos, segundos e deci-
 * mos, todos inteiros. Faca uma funcao que calcule e retorne a diferenca entre duas medicoes
 * de tempo (t2 - t1).  Utilize scanf(”%dm %ds %d”,...) como formatacao.
 *
 * Autor: Marcos Seiti Suzuki
 * Data: 18/11/2017
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct Cronometro {
    unsigned int min, seg, dec;
    char neg;
} Cronometro;

Cronometro converte (int decimal) {

    Cronometro d;
      
    d.dec = decimal%100;
    decimal -= decimal%100;
    decimal /= 100;
    d.seg = decimal%60;
    decimal -= decimal%60;
    decimal /= 60;
    d.min = decimal;
    
    return d;

}

Cronometro diferenca (Cronometro *a, Cronometro *b) {

    Cronometro d;
    int decimal1=0, decimal2=0, result=0;

    decimal1 += a->min*6000;
    decimal1 += a->seg*100;
    decimal1 += a->dec;
    
    decimal2 += b->min*6000;
    decimal2 += b->seg*100;
    decimal2 += b->dec;

    result = decimal2 -  decimal1;
    
    d.neg='\0';
    
    if (result<0) {
        d.neg='-';
        result *= -1;
    }
        
    d=converte(result);
    
    return d;

}

int main () {

    Cronometro *a, *b, dif;
    a = malloc(sizeof(Cronometro));
    b = malloc(sizeof(Cronometro));

    scanf("%dm %ds %d", &(a->min), &(a->seg), &(a->dec));
    scanf("%dm %ds %d", &(b->min), &(b->seg), &(b->dec));

    dif = diferenca(a, b);
    
    printf("%c%dm %ds %d\n", dif.neg, dif.min, dif.seg, dif.dec);
    
    free(a);
    free(b);

    return 0;
}
