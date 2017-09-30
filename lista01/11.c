#include <stdio.h>

int main() {
    int n, binario=0;
    int cont=1;

    printf("Digite o numero: ");
    scanf("%d", &n);
 
    while (n!=0) {

        binario += (n % 2) *cont;
        n/=2;
        cont *= 10;

    }

    printf("%d\n", binario);
    return 0;
}
