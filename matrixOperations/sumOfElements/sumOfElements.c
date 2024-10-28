// athroism tiw x grammis kai y stilis enos 2d pinaka
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 4

int main() {
    int A[N][M];
    int i,j;
    int x, y;
    int sx=0, sy=0;
    
     for (i=0;i<N;i++)
        for (j=0; j<M; j++)
            A[i][j] = rand() % 100;
    
    for (i=0;i<N;i++){
     for (j=0; j<M; j++){
	 printf("%d ", A[i][j]);
	}
      printf("\n");
    }
    
    printf("\nLine=");
    scanf("%d", &x);
    printf("\nColumn=");
    scanf("%d", &y);
    
    srand(time(NULL));
    
    for (i=0; i<M; i++)
        sx += A[x][i];
    
    for (i=0; i<N; i++)
        sy += A[i][y];

    for (i=0; i<N; i++) {
        for (j=0; j<M; j++)
            printf("%5d", A[i][j]);
        printf("\n");
    }
    
    printf("\n\nSum of line number %d = %d", x, sx);
    printf("\n\nSum of column number %d  = %d\n\n", y, sy);
    
    return 0;
}
