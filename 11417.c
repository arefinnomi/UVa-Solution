#include <stdio.h>

int GCD(int i, int j)
{
    int temp;
    while(i!=0)
    {
        temp=i;
        i=j%i;
        j=temp;
    }
    return j;
}

int main()
{
    int N;
    while(scanf("%d", &N)!=EOF)
    {
        if(N>1&&N<501)
        {
            int G=0, i, j;
            for(i=1; i<N; i++)
                for(j=i+1; j<=N; j++)
                {
                    G+=GCD(i,j);
                }
            printf("%d", G);
        }
        else break;
        printf("\n");
    }
    return 0;
}
