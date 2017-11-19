/* lista 4 exercicio 3
 * Crie uma struct para representar a ficha de um aluno (nome,  n ́umero de matr ́ıcula,
 * nota da P1,  nota da P2,  nota da P3),  o nome ter ́a no m ́aximo 100 caracteres e a lista
 * contera 50 alunos, utilizando essa struct crie uma fun ̧c ̃ao que:  leia do arquivo a lista de
 * alunos (lista alunos.txt) e calcule a m ́edia de cada aluno,  imprimindo os resultados em
 * outro arquivo com nome, n ́umero de matricula e m ́edia.  Os pontos flutuantes devem ser
 * limitados a 2 casas decimais.  O conte ́udo do arquivo de sa ́ıda deve estar no formato do
 * arquivo lista_alunos.txt fornecido. Para a leitura de cada linha utilize:
 *
 * fscanf (fp, "\%s \%d \%f \%f  %f",
 *           alunos[i].nome,  &alunos[i].ra,
 *           &alunos[i].p1, &alunos[i].p2, &alunos[i].p3);
 *           
 * E para a escrita:
 *
 * fprintf (fp, "\%s \%d \%f \%f %f %f\n",
 *           alunos[i].nome, alunos[i].ra,
 *           alunos[i].p1, alunos[i].p2, alunos[i].p3,
 *           alunos[i].media);
 *
 * Autor: Marcos Seiti Suzuki
 * Data: 18/11/2017
 */

#include <stdio.h>
#include <stdlib.h>


typedef struct Aluno {
    char nome[100];
    unsigned int ra;
    float p1, p2, p3, media;
} Aluno;

float media (float p1, float p2, float p3) {
    return (p1+p2+p3)/3.0;

}

int main () {

    FILE * fp;
    Aluno alunos[50];
    int i;
    
    fp = fopen("lista_alunos.txt", "r+");
    
    for (i=0;i<50;i++) {
        fscanf (fp, "\%s \%d \%f \%f  %f",
                    alunos[i].nome,  &alunos[i].ra,
                    &alunos[i].p1, &alunos[i].p2, &alunos[i].p3);
    }
    
    fclose(fp);
    
    fp = fopen("media_alunos.txt", "w+");
    
    for (i=0;i<50;i++) {
        alunos[i].media = media(alunos[i].p1,alunos[i].p2,alunos[i].p3);
        
        fprintf (fp, "\%s \%04d \%.2f \%.2f %.2f %.2f\n",
                    alunos[i].nome, alunos[i].ra,
                    alunos[i].p1, alunos[i].p2, alunos[i].p3,
                    alunos[i].media);
    }
    
    fclose(fp);

    return 0;
}
