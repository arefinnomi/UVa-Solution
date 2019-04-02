#include <stdio.h>
#include <math.h>


int main()
{
    short test;
    scanf("%hd", &test);

    while(test--)
    {
        double num;
        unsigned int i;

        scanf("%lf",&num);


        i =  floor(  ( -1 + sqrt( 1 + 8.0 * num )  ) / 2.0);


        printf("%u\n", i);

    }
    return 0;
}
