#include<stdio.h>

    int main(){

        int i, j, A[3][3], B[3][3], C[3][3];
        printf("Entre com os 9 elementos da matriz A:\n");
        for (i=0; i<3; i++){
            for (j=0; j<3; j++){
                scanf("%d", &A[i][j]);
                C[i][j]=A[i][j];
            }
        }
        printf("Entre com os 9 elementos da matriz B:\n");
        for (i=0; i<3; i++){
            for (j=0; j<3; j++){
                scanf("%d", &B[i][j]);
                C[i][j]=C[i][j]+B[i][j];
            }
        }
        printf("--------------------MATRIZ C:--------------------");
        for (i=0; i<3; i++){
            printf("\n");
            for (j=0; j<3; j++){
                printf("%d\t", C[i][j]);
            }
        }
        return 0;
    }