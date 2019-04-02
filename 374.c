#include <stdio.h>

long long mod_f(long long base, long long power, long long mod)
{
    long long re, temp;

    if( power == 0 ) re = 1 ;
    else if (power == 1) re = base % mod;
    else
    {
        long long mid = power / 2 ;

        temp = mod_f( base , mid, mod);

        if ( power % 2 == 0) re = (( temp % mod) * (temp % mod ) ) % mod ;

        else
        {
            long long extra = base % mod;
            re = ( (  (  ( extra % mod) * ( temp % mod )   ) % mod  )* ( temp % mod ) ) % mod ;/*or value of re will be negative*/
        }

    }
    return re;
}



int main()
{
    int power, base, mod, re;

    while( scanf("%d %d %d", &base, &power, &mod) != EOF)
    {
        re = mod_f( base, power, mod);

        printf("%d\n", re);
    }
    return 0;
}
