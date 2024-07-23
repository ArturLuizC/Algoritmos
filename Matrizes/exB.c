#include<stdio.h>

    int main(){

        int i, j, A[3][3], s;

        for (i=0; i<3; i++){
            for (j=0; j<3; j++){
                scanf("%d", &A[i][j]);
            }
        }

        for (i=0; i<3; i++){
            printf("\n");
            s=0;
            for (j=0; j<3; j++){
                printf("%d\t", A[i][j]);
                s=s+A[i][j];
            }
            printf("Soma da linha = %d", s);
        }

        return 0;
    }