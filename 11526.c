#include <stdio.h>
#include <math.h>
/*
long long H(int n)
{
    long long res = 0;
    int i;
    for(  i = 1; i <= n; i=i+1 )
    {
        printf("%d\t%d\t%lld\n",i, n/i, res);
        res = (res + n/i);
    }
    return res;
}
*/

long long re( int i, int limit)
{
    if ( i == 0) return 0;
    long long res = 0;

    int now ;
    int next ;

    for (now = 1; now <= limit; )
    {
        next = now + 1;

        int diff = ( i / now - i / next ); /*printf("%d\n", diff);*/

        res += i / now + (long long )diff * now ;

        now = next;
    }

    now--;
    if( now == limit && now == i / now ) res -= limit;
    return res;
}



int main()
{
    int T;
    scanf("%d", &T);

    while(T--)
    {

        int i;


        scanf("%d", &i);
        /*        printf("\n");

                printf("%lld\n\n\nsom\n\n", H(i));*/
        int limit = sqrt(i);

        long long sum = re( i, limit);

        printf("%lld\n", sum);
    }
    return 0;
}
