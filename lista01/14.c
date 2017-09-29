#include <stdio.h>

int main() {
    int soma=0, n[10];

    printf("Digite 10 numeros: ");
    scanf("%d %d %d %d %d %d %d %d %d %d", &n[0], &n[1], &n[2], &n[3], &n[4], &n[5], &n[6], &n[7], &n[8], &n[9]);


    for (int i=0; i<10; i++) {

        soma += n[i];

    }


    printf("soma = %d\n", soma);
    printf("media = %lf\n", soma/10.0);

    return 0;
}
