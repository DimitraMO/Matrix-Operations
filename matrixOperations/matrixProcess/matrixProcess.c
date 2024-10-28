// 2D's array mean value
// how many emelents are less, greater or equal to the mean value
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 4

int main() {
    int A[N][M];
    int i,j;
    float mt; //mean value
    int sum=0;
    int greater=0, less=0, equal=0;
    
    srand(time(NULL));
    //matrix insert  
    for (i=0;i<N;i++)
        for (j=0; j<M; j++)
            A[i][j] = rand() % 100;

    //mean value
    for (i=0; i<N; i++)
        for (j=0; j<M; j++)
            sum += A[i][j];
    mt = (float) sum/(N*M);
    
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++) {
            if (A[i][j]>mt)
                greater++;
            if (A[i][j]<mt)
                less++;
            if (A[i][j] == mt)
                equal++;
        }
    }
    //print of matrix
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++)
            printf("%5d", A[i][j]);
        printf("\n");
    }
    printf("\n\nMean Value =%.3f", mt);
    printf("\n\nGreater = %d", greater);
    printf("\n\nLess  = %d", less);
    printf("\n\nEqual = %d\n\n", equal);
    
    return 0;
}
