#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero maior que 100: ");
    scanf("%d", &n);


    if (n>100) {
        printf("100");
        for (int i=101; i<=n; i++) {

            if ( (i%2) == 0 ) {
                printf(", %d",i);
            } 

        }

    }

    printf("\n");

    return 0;
}
