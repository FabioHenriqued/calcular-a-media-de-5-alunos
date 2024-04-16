#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float nt[5][3], medias[5], notas;
    char nome[5][50];
    int x1 = 1, n, l = 0, c, x = 1;
    for(n = 0; n < 5; n++){
        printf("Informe o nome do %iº aluno: ", x++);
        gets(nome[n]);
    }
    printf("\n------------------------------\n");
    for(n = 0; n < 5; n++){
        printf("Digite as 3 notas de %s\n", nome[n]);
        notas = 0;
        for(c = 0; c < 3; c++){
            printf("%i°: ", c + 1);
            scanf("%f", &nt[n][c]);
            notas += nt[n][c];
        }
        medias[n] = notas / 3;
        printf("\n");
    }
    printf("\n----------------------------------\n     Lista de Alunos e Médias\n" );
    printf("----------------------------------\n");
    for(c = 0; c < 5; c++){
        printf("%i°: %s, você obteve média %.1f.\n", c + 1, nome[c], medias[c]);
    }

    return(0);
}