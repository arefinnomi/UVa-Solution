#include <stdio.h>
#include <math.h>


int main()
{
    int test, t;
    scanf("%d", &test);

    t = test;
    while(t--)
    {
        int num;
        scanf("%d", &num);
        printf("Case #%d: %d", test-t, num);


        int i, n = 0, limit;
        limit = sqrt(num);

        for( i = 2 ; i <= limit ; i++)
        {
            if( num % i == 0 )
            {
                printf(" = %d * %d", i, num / i );
                n++;
            }
            if ( n == 2) break;
        }
        if( n == 1 ) printf(" = %d * %d", num , 1);
        printf("\n");
    }


    return 0;
}
