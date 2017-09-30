#include <stdio.h>

int main() {
    int cargo, falta, hora_extra;
    double salario[6] = {0, 10000.0, 8000.0, 5000.0, 3000.0, 2000.0};
    

    printf("Digite #Cargo, #faltas, #horas extras: ");
    scanf("%d %d %d", &cargo, &falta, &hora_extra);

    printf("Cargo         : ");
    switch ( cargo ) {
        case 1:
            printf("Diretor\n");
            break;
        case 2:
            printf("Gerente\n");
            break;
        case 3:
            printf("Engenheiro\n");
            break;
        case 4:
            printf("Tecnico\n");
            break;
        case 5:
            printf("Operador\n");
            break;
        default:
            printf("Opcao invalida!");
    }

    printf("# de Faltas   : %d\n", falta);
    printf("# horas-extras: %d\n", hora_extra);
    printf("descontos     : %.2lf\n", falta*salario[cargo]/20.0);
    printf("acrescimo     : %.2lf\n", hora_extra*(salario[cargo]/160.0 + 40));
    printf("slario        : %.2lf\n", salario[cargo] - falta*salario[cargo]/20.0 + hora_extra*(40 + salario[cargo]/160.0));


    return 0;
}
