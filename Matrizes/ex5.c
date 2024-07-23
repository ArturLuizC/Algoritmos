#include<stdio.h>

int main(){
    int n, i ,j;
    printf("Entre com a ordem da matriz:\n");
    scanf("%d", &n);
    float A[n][n], B[n][n];
    printf("Entre com os elementos da matriz:\n");
    for (i=0; i<n; i++){
        for (j=0;j<n;j++){
            scanf("%f", &A[i][j]);
        }
    }
    printf("----------------MATRIZ----------------");
    for (i=0; i<n; i++){
        printf("\n");
        for (j=0;j<n;j++){
            printf("%.1f\t", A[i][j]);
        }
    }
        printf("\n----------------MATRIZ TRANSPOSTA----------------");
    for (i=0; i<n; i++){
        for (j=0;j<n;j++){
            B[i][j]=A[j][i];
        }
    }
    for (i=0; i<n; i++){
        printf("\n");
        for (j=0;j<n;j++){
            printf("%.1f\t", B[i][j]);
        }
    }

    return 0;
}