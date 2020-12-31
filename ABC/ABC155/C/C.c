#include <stdio.h>

int main(){
    int N;
    int i, j;

    scanf("%d",&N);

    char S[N][10];

    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            scanf("%s\n",&S[i][j]);
        }
        
    }
    
}