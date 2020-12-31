#include <stdio.h>

int main(){
    int N;
    int i, flag = 0;

    scanf("%d",&N);

    int A[N];

    for ( i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
    }
    
    for ( i = 0; i < N; i++)
    {
        if (A[i] % 2 == 0)
        {
            if (A[i] % 3 == 0 || A[i] % 5 == 0)
            {

            }else{
                flag = 1;
            }
        }
        
    }
    if (flag == 0)
    {
        printf("APPROVED\n");
    }else{
        printf("DENIED\n");
    }

    return 0;
}