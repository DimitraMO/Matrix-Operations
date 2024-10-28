//element search in a 1D array
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main() {
    int A[N];
    int i;
    int position=-1;
    int element;
   
    
    srand(time(NULL));
    for (i=0; i<N; i++)
        A[i] = rand() % 1000;
        
        for (i=0; i<N; i++)
        printf("%4d", A[i]);
      

    printf("\nElement for search:");
    scanf("%d", &element);
    
    for (i=0; i<N; i++)
        if (A[i] == element)
            position = i;
    
    
    
    if (position == -1)
        printf("\n\nNot found!\n\n");
    else
        printf("\n\nFound in position %d\n\n", position);
    
    
    
    return 0;
}
    
