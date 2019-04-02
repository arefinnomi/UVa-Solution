/*********************************
   *	Author: Shamsul Arefin
   *	University of Chittagong

 *********************************
   *
   *  this code produce total 148933 primes.& the largest prime is 1999993
   *
 **********************************/



#include <stdio.h>

int main()
{
    int n =  2 * 1e6 ;

    char prime[n + 1 ];

    /* in this code, 2 is prime by default */

    int i, j, inc, limit;

    for( i = 1 ; i <= n; i++) prime[i] = 1;/*let all array index be prime*/

    limit = sqrt( n );

    for( i = 2 ; i <= n ; i++) /* finding for array index whether it is prime or not*/
    {
        if( prime[i] == 1 )
        {

            inc = 2 * i - 1; /* increment for ever number that represent a prime (2n-1)*/

            for( j = i + inc ; j <= n ; j += inc )
            {
                prime[j] = 0;
            }
        }
    }

    printf("%d\t", 2);


    for( i = 2 * 1e6 - 100, j = 1 ; i <= n ; i++)
    {
        if ( prime[ i ] == 1)
        {
            printf("%d\t", 2 * i - 1);/*n = 2n - 1*/
            j++;

            if ( j == 10)
            {
                printf("\n");
                j = 0;
            }
        }
    }

    return 0;
}
