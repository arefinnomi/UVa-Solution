#include <stdio.h>

long long int func( long long int i )
{
    long long int re;

    if( i == 1 ) re = i % 2;
    else re = func( i / 2 ) + i % 2;

    return re;
}

int main()
{
    printf("%lld\n", func( 1000000000000000000 ));
    return 0;
}
