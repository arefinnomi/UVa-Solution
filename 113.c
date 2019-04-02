#include <stdio.h>
#include <math.h>

int main()
{
    double pow , base ;

    while(scanf("%lf %lf", &pow, &base) != EOF)
    {

        printf("%lf\n", exp( log( base ) / pow ));
    }
    return 0;
}
