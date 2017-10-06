#include <stdio.h>

unsigned int primo (unsigned int n, unsigned int divisor) {
    if (divisor==1) return 1;
    else if (n==divisor) return primo(n, divisor - 1);
    else if (n%divisor==0) return 0;
    return primo(n, divisor - 1);
}

int main(){

    unsigned int n; 

    printf("=== Primo identificador ===\n");
    printf("Digite n: ");
    scanf("%d", &n);

    printf("Primo recusrisva: ");  

    if (primo(n,n-1)) printf("Eh primo!\n");
    else printf("Nao eh primo!\n");

    return 0;
}
