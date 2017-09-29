#include <stdio.h>

int main() {
    int soma=0, n;

    printf("Digite o numero: ");
    scanf("%d", &n);


    for (int i=0; i<=n; i++) {

        soma += n-i;

    }

    printf("soma de 1 a %d = %d", n, soma);

    return 0;
}
