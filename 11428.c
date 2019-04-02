#include <stdio.h>

int main()
{
    int n,cube;
    while(1)
    {
        scanf("%d", &n) ;
        if (n==0) break;

        int x, y;

        for( x = 1; x < 60; x++)
        {
            for(y = x-1; y > 0; y--)
            {
                cube = x*x*x - y*y*y;
                if (cube >= n ) break;
            } if(cube == n) break;
        }

        if( cube == n) printf("%d %d\n", x, y);
        else printf("No solution\n");
    }
    return 0;
}
