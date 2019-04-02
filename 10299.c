#include <stdio.h>
#include <math.h>

char prime[100000  + 1 ];/*for which index the value array is one that index represent a prime & we have to pass prime 2 manually*/

long int factors[35];/*for saving the factor of the given num*/

int count = 0; /*for counting the number of the factor of the given num*/

void generat_prime(void)
{


    /* in this code, 2 is prime by default */

    int i, j, inc, limit;

    for( i = 1 ; i <= 100000 ; i++) prime[i] = 1;/*let all array index be prime*/

    limit = sqrt( 100000  );

    for( i = 2 ; i <= limit ; i++) /* finding for array index whether it is prime or not*/
    {
        if( prime[i] == 1 )
        {

            inc = 2 * i - 1; /* increment for ever number that represent a prime number (2n-1)*/

            for( j = i + inc ; j <= 100000  ; j += inc )
            {
                prime[j] = 0;
            }
        }
    }
}


void primefactor(long long int num) /*the all possible prime factor of a certain number*/
{
    count = 0 ;

    long int n , limit;

    if (num % 2 == 0)
    {
        factors[count] = 2 ;
        while( num % 2 == 0) /* here i checked for the prime prime number 2 separately. because 2 is in the prime array*/
        {
            num /= 2 ;
        }
        count++;
    }


    limit = sqrt(num) ;
    for ( n = 2 ; n <= limit ; n++)
    {
        if ( prime[n] == 1 )
        {
            /* checking whether the prime[n] is true or not

                if true then 2n-1 is a prime */

            if ( num % ( 2 * n - 1 ) == 0 )
            {
                factors[count] = 2 * n - 1;/*in this case we dont have to repeat the same number in the factor array. because we are counting the amount of the reputation of that number*/

                while ( num % ( 2 * n - 1 ) == 0 )
                {

                    num /=  ( 2 * n - 1 );
                }
                count++;
            }

        }
    }

    if(num != 1)
    {
        factors[count] = num ; /* only one prime factor is possible that is greater then that number*/
        count++;
    }

    return;
}



int main()
{
    generat_prime();

    double num;

    int i;

    while(1)
    {
        scanf("%lf", &num);
        if ( num == 0 ) break;

        else if ( num == 1 ) printf("0\n");

        else
        {

            primefactor(num);



            double re = num;

            for ( i = 0; i < count; i++) re = re - re / factors[i];

            printf("%0.0lf\n",re);
        }
    }


    return 0;
}
