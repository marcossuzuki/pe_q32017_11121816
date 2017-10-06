#include <stdio.h>

unsigned int primo (unsigned int n, unsigned int divisor) {
    if (divisor==1) return 1;
    else if (n==divisor) return primo(n, divisor - 1);
    else if (n%divisor==0) return 0;
    return primo(n, divisor - 1);
}

unsigned int primoTR (unsigned int n, unsigned int base) {
    if (n<10) return base+n;
    return primoTR(n/10, base+n%10);
}

int main(){

    unsigned int n; 

    printf("=== Primo identificador ===\n");
    printf("Digite n: ");
    scanf("%d", &n);


    //printf("Soma dos digitos recusrisva caudal: %d\n", sumdigitsTR(n,0));    

    printf("Primo recusrisva: ");  
    if (primo(n,n-1)) printf("Eh primo!\n");
    else printf("Nao eh primo!\n");

    return 0;
}
