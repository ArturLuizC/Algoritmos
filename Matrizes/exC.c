#include<stdio.h>

    int main(){

        int i, j, A[3][3], s0=0, s1=0, s2=0;
        printf("Entre com os 9 elementos da matriz 3x3:\n");
        for (i=0; i<3; i++){
            for (j=0; j<3; j++){
                scanf("%d", &A[i][j]);
            }
        }
        for (i=0; i<3; i++){
            printf("\n");
            for (j=0; j<3; j++){
                printf("%d\t", A[i][j]);
                if (j==0){
                    s0=s0+A[i][j];}
                if (j==1){
                    s1=s1+A[i][j];}
                if (j==2){
                    s2=s2+A[i][j];}
            }
        }
        printf("\n%d\t%d\t%d\t<- Somas das colunas", s0, s1, s2);
        return 0;
    }