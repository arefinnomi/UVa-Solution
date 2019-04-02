#include <stdio.h>
#include <math.h>


char prime[1000000 + 1];

int digit[1000000 + 1];/*represent if the summation of digits of the primes is a prime or not . if 1 then true*/

void gen_prime(void)
{
    long i, j, limit;

    for( i = 2 ; i <= 1000000 ; i++) prime[i] = 1;/*let all array index be prime*/

    limit = sqrt(1000000);

    for( i = 2 ; i <= 1000000 ; i++) /* finding for array index whether it is prime or not*/
    {
        if( prime[i] == 1 )

            for( j = i + i ; j <= 1000000 ; j += i) prime[j] = 0 ;
    }

}

long sum_digits(long num)/*this function generate the summation of the digit of a number */
{
    long sum = 0;
    while ( num )
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}

void prime_digit(void)
{
    long i, count;
    count = 0;
    for( i = 0 ; i <= 1000000 ; i++)
    {
        if ( prime[i] == 1)
        {
            long sum = sum_digits( i );/*for saving the summation of the digits of the current  prime */

            if (prime[sum] == 1)
            {
                count++;
            }
        }
        digit[i] = count;
    }
}

int main()
{
    gen_prime();
    prime_digit();
    long t1, t2, test;

    scanf("%ld", &test);

    while( test--)

    {
        long count = 0 ;
        scanf("%ld %ld", &t1, &t2);

        printf("%ld\n", digit[t2] - digit[t1-1]);

    }
    return 0;
}
