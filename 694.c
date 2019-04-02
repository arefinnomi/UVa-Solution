#include <stdio.h>

long int count;

void collatz( long a, long limit)
{
    if ( a > limit ) return ;

    count++;

    if( a == 1 ) return;

    else if ( a % 2 == 0 )
    {
        a = a / 2;

        collatz( a, limit);



    }
    else
    {
        a =  3 * a + 1 ;
        collatz( a, limit);


    }
}

int main()
{
    long int a, limit;

    int test = 0;

    while(1)
    {
        test++;

        scanf("%ld %ld", &a, &limit);
        if ( a < 0 &&  limit < 0) break;
        count = 0 ;

        collatz(a, limit);

        printf("Case %d: A = %ld, limit = %ld, number of terms = %ld\n", test, a, limit, count);
    }

    return 0;
}
