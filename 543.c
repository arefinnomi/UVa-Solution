#include <stdio.h>

char primes[500002];/*for saving the primes produced for sieve's function*/


char is_prime(unsigned num)/*for checking whether a number is prime or not*/
{
	if( num == 2) return 'p';

	if ( num % 2 == 0 ) return 'n';

	else
	{
		unsigned  i , limit;

		limit = sqrt(num);

		for( i = 3 ; i <= limit ; i += 2)

			if ( num % i == 0)
			{
				return 'n';
			}

		return 'p';
	}
}

void sieve(void)
{
	int i, j, limit;

	for ( i =  0 ; i <= 500002 ; i++) primes[i] = 'p';

	limit = sqrt ( 500002 );

	for ( i =  3 ; i <= limit ; i++)
	{
		if ( primes[i] == 'p')

			for( j = i + i ; j < 500002 ; j += i) primes[j] = 'n';
	}
}

int main()
{
	sieve();


	int num;

	while(1)
	{
		scanf("%d", &num);

		if( num == 0 ) break ;


		if (  is_prime( num - 2 ) == 'p')
		{
			printf("%d = 2 + %d", num, num - 2);/*while num = 2 + num2, here num2 is prime*/

			goto found;

		}
		else
		{

			int num1, num2; /*num = num1 + num2 ; here num1 & num2 are primes*/

			int half = num / 2;

			for ( num1 = 3 ; num1 <= half ; num1  += 2 )
			{
				if( primes[num1] == 'p')
				{
					num2 = num - num1;

					if ( is_prime(num2) == 'p')
					{
						printf("%d = %d + %d", num, num1, num2);

						goto found;
					}
				}
			}
		}
		printf("Goldbach's conjecture is wrong.");
found:
		printf("\n");


	}
	return 0 ;
}
