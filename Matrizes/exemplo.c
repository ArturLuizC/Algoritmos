#include<stdio.h>

    int main(){

        int i, j, m, n;
        printf("Ordem da matriz:\n");
        scanf("%d %d", &m, &n);
        float A[m][n];
        for (i=0; i<m; i++){
            for (j=0; j<n; j++){
                printf("Digite o elemento A[%d][%d]:\n", i, j);
                scanf("%f", &A[i][j]);
            }
        }
        printf("\n==========================================\n");
        for (i=0; i<m; i++){
            printf("\n");
            for (j=0; j<n; j++){
                printf("\t%f", A[i][j]);
            }
        }

        return 0;
    }