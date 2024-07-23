#include<stdio.h>

    int main(){

        int i, j;
        float M[3]={0.0, 0.0, 0.0}, N[3][4];
        for (i=0; i<3; i++){
            printf("Entre com as notas do aluno %d:\n", i+1);
            for (j=0; j<4; j++){
                scanf("%f", &N[i][j]);
            }
        }
        printf("--------------------MATRIZ NOTAS:--------------------");
        for (i=0; i<3; i++){
            printf("\n");
            for (j=0; j<4; j++){
                printf("%.1f\t", N[i][j]);
            }
        }
        printf("\n--------------------MEDIAS:--------------------\n");
        for (i=0; i<3; i++){
            for (j=0; j<4; j++){
                M[i]=M[i]+N[i][j];
            }
        printf("Media do aluno %d = %.1f\n", i+1, M[i]/4.0);
        }
        return 0;
    }