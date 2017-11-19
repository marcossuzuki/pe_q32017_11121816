/* lista 4 exercicio 4
 *
 * Checar se um numero eh ou nao potencia de 2.
 *
 * Autor: Marcos Seiti Suzuki
 * Data: 18/11/2017
 */

#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

//funcao normal
ulint f1 (ulint x)
{
    while (((x % 2) == 0) && x > 1) /* While x is even and > 1 */
        x /= 2;
    return (x == 1);
}

//funcao bitwise
ulint f2 (ulint x)
{
    return ((x != 0) && !(x & (x - 1)));
}

int main () {
    clock_t tempo_init, tempo_fim;
    double tempo_gasto;
    ulint soma = 0;
    ulint num;
    
    scanf("%lu", &num);
    if (f1(num)) printf("sim\n");
    else printf("nao\n");
    
    if (f2(num)) printf("sim\n");
    else printf("nao\n");   
    
    tempo_init = clock();
    for (int i=0; i<BIGNUM; i++) {
        soma += f1(i);
    }
    tempo_fim = clock();
    
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);
    
    soma = 0;
    tempo_init = clock();
    for (int i=0; i<BIGNUM; i++) {
        soma += f2(i);
    }
    tempo_fim = clock();
    
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);
    
    return 0;
    
}
