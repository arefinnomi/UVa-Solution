#include <stdio.h>
#include <math.h>


double cqrt( int num)
{
    double re = exp( log(num) / 3);
    return re;
}
int main()
{
    int n;



    while(1)
    {
        scanf("%d", &n);
        if(n == 0) break;

        int y;
        double x, ceil_x, floor_x;

        for( y = 1; y <= 60; y++)
        {
            x = cqrt( n + y*y*y);
            printf("%lf %lf %d\n", x, (x - (int) x)*100000000, y);

            ceil_x = ceil(x);
            floor_x = floor(x);
            if( (int )x == (int)ceil_x || (int)x == (int)floor_x ) break;
        }

        if ( y > 60 ) printf("No solution");
        else printf("%0.0lf %d", x, y);
        printf("\n");
    }
    return 0;
}
