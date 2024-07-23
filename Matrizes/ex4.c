#include<stdio.h>

int main(){
    int n, m, i ,j, a, b, c, d;
    printf("Entre com a ordem da matriz:\n");
    scanf("%d %d", &n, &m);
    float A[n][m], me, ma;
    printf("Entre com os elementos da matriz:\n");
    for (i=0; i<n; i++){
        for (j=0;j<m;j++){
            scanf("%f", &A[i][j]);
            if (i==0 && j==0){
                ma=A[i][j];
                me=A[i][j];
                a=0, b=0, c=0, d=0;}
            if (A[i][j]<me){
                me=A[i][j];
                a=i, b=j;}
            if (A[i][j]>ma){
                ma=A[i][j];
                c=i, d=j;}
        }
    }
    printf("----------------MATRIZ----------------");
    for (i=0; i<n; i++){
        printf("\n");
        for (j=0;j<m;j++){
            printf("%.1f\t", A[i][j]);
        }
    }
    printf("\n--------------------------------------");
    printf("\nO menor valor e: %.1f. Ele esta na linha %d e coluna %d", me, a, b);
    printf("\nO maior valor e: %.1f. Ele esta na linha %d e coluna %d", ma, c, d);

    return 0;
}