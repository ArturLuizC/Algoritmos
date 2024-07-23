#include<stdio.h>

    int main(){

        int i, j, A[3][3];

        for (i=0; i<3; i++){
            for (j=0; j<3; j++){
                scanf("%d", &A[i][j]);
            }
        }

        for (i=0; i<3; i++){
            printf("\n");
            for (j=0; j<3; j++){
                printf("%d\t", A[i][j]);
            }
        }

        return 0;
    }