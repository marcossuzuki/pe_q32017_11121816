/* lista 4 exercicio 5
 *
 * Receba dois numeros e diga qual o maior e qual o menor.
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
ulint f1 (ulint x, ulint y)
{
    return x>y;
}

//funcao bitwise
ulint f2 (ulint x, ulint y)
{    
    return (((y+((~x)+1)) >> 31) & 1);
}

int main () {
    clock_t tempo_init, tempo_fim;
    double tempo_gasto;
    ulint soma = 0;
    ulint num1, num2;
    
    scanf("%lu %lu", &num1, &num2);
    
    tempo_init = clock();

    for (int i=0; i<BIGNUM; i++) {
        f1(num1,num2);
    }

    if (f1(num1, num2)) printf("maior = %lu e menor = %lu\n", num1, num2);
    else printf("maior = %lu e menor = %lu\n", num2, num1);
    tempo_fim = clock();
    
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);
    
    soma = 0;
    tempo_init = clock();

    for (int i=0; i<BIGNUM; i++) {
        f2(num1,num2);
    }
    
    if (f2(num1, num2)) printf("maior = %lu e menor = %lu\n", num1, num2);
    else printf("maior = %lu e menor = %lu\n", num2, num1);
    tempo_fim = clock();
    
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);
    
    return 0;
    
}
