#include<stdio.h>

    int main(){

        int i, j, A[3][3];
        printf("Entre com os 9 elementos da matriz 3x3:\n");
        for (i=0; i<3; i++){
            for (j=0; j<3; j++){
                scanf("%d", &A[i][j]);
            }
        }
        for (i=0; i<3; i++){
            for (j=0; j<3; j++){
                if (i%2==0 && j%2!=0)
                    printf("%d\t", A[i][j]);
            }
        }
        return 0;
    }