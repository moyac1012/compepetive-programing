#include <stdio.h>

int main(){
    int N,K;
    int i,j,count = 0;

    scanf("%d %d",&N, &K);

    int A[N];

    for ( i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
    }
    int B[N*(N-1)/2];

    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < N; j++)
        {
            B[count] = A[i] * A[j];
            count++;
        }
        
    }
    
    sort(B, B+(N*(N-1)/2));

    printf("%d", B[K]);

    return 0;
}