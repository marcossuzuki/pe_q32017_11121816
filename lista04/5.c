/* lista 4 exercicio 5
 *
 * E possıvel calcular a soma dos bits de um inteiro
 * x somando o resto da divisao de x por 2 enquanto divide-se
 * x por 2. Implemente a versao utilizando divisao e modulo (f1) 
 * e a versao utilizando operadores de bits (f2).
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
    int sum = 0;
    
    while (x >= 1) {
        sum += x%2;
        x /= 2;
    }
    
    return sum;
}

//funcao bitwise
ulint f2 (ulint x)
{
    ulint sum = 0;
    
    while (x >= 1) {
        sum += x&1;
        x >>= 1;
    }
    
    return sum;
}

int main () {
    clock_t tempo_init, tempo_fim;
    double tempo_gasto;
    //ulint soma = 0;
    
    tempo_init = clock();

    for (int i=0; i<(BIGNUM/10000000); i++) {
        f1(i);
    }

    tempo_fim = clock();
    
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);
    
    //soma = 0;
    tempo_init = clock();
    
    for (int i=0; i<(BIGNUM/10000000); i++) {
        f2(i);
    }
    
    tempo_fim = clock();
    
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);
    
    return 0;
    
}
