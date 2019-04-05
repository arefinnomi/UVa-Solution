#include <stdio.h>
#include <math.h>

char prime[9999999  + 1 ];

long long int factors[60];
int count ;

void generat_prime(void)
{

	int i, j, inc, limit;

	for( i = 1 ; i <= 9999999 ; i++) prime[i] = 1;

	limit = sqrt( 9999999  );

	for( i = 2 ; i <= limit ; i++)
	{
		if( prime[i] == 1 )
		{
			inc = 2 * i - 1;

			for( j = i + inc ; j <= 9999999  ; j += inc )
			{
				prime[j] = 0;
			}
		}
	}
}
void primefactor(long long int num)
{
	count = 0 ;

	long long int n , limit;

	if (num % 2 == 0)
	{
		factors[count] = 2 ;
		while( num % 2 == 0)
		{
			num /= 2 ;
		}
		count++;
	}

	limit = ( sqrt(num) + 1) / 2 ;

	for ( n = 2 ; n <= limit ; n++)
	{
		if ( prime[n] == 1 )
		{

			if ( num % ( 2 * n - 1 ) == 0 )
			{

				factors[count] = 2 * n - 1;

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
		factors[count] = num ;
		count++;
	}
}

int main()
{
	generat_prime();
	long long int num;
	while(1)
	{
		scanf("%lld", &num);
		if ( num == 0 ) break;

		if ( num < 0 ) num = -num;

		if( num == 1) printf("-1\n");
		else
		{
			primefactor(num);
			if (count - 1 == 0 )printf("-1\n");

			else
				printf("%lld\n", factors[count - 1]);
		}
	}
	return 0;
}
