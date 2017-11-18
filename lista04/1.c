/* lista 4 exercicio 1
 * Crie uma struct para representar pontos em um espaco tridimencional (x,  y e z,  do
 * tipo float).  Com essa struct crie uma funcao que receba dois pontos com coordenadas em
 * ponto flutuante (no formato (x, y, z) e calcule a distancia entre dois pontos.  A saıda em
 * ponto flutuante deve ser truncada em 2 casas decimais.  Para calcular a distancia entre
 * dois pontos use a formula:
 *
 * Autor: Marcos Seiti Suzuki
 * Data: 18/11/2017
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Vetor3 {
    float x;
    float y;
    float z;
} Vetor3;

float distance (Vetor3 *a, Vetor3 *b) {

    float d=0.0;

    d+= pow((a->x - b->x),2);
    d+= pow((a->y - b->y),2);
    d+= pow((a->z - b->z),2);
    d = pow(d,0.5);

    return d;

}

int main () {

    Vetor3 *a, *b;
    a = malloc(sizeof(Vetor3));
    b = malloc(sizeof(Vetor3));

    scanf("%f, %f, %f", &(a->x), &(a->y), &(a->z));
    scanf("%f, %f, %f", &(b->x), &(b->y), &(b->z));
    
    printf("%.2f\n", distance(a, b));
    
    free(a);
    free(b);


    return 0;
}
