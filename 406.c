#include <stdio.h>


int main()
{
	int range , c ;
	while(scanf("%d %d", &range , &c) != EOF)
	{


		int total = 0 ; /*represent the total number of nums*/

		int i, j ;


		/*sieve starts here*/
		int limit;
		char nums[ range + 1 ];

		for ( i =  1 ; i <= range ; i++) nums[i] = 1;

		limit = sqrt ( range );

		for ( i =  2 ; i <= limit ; i++)
		{
			if ( nums[i] == 1 )

				for( j = i + i ; j <= range ; j += i) nums[j] = 0 ;
		}

		for ( i =  1 ; i <= range ; i++)
		{
			if ( nums[i] == 1) total++;
		}
		/*sieve & counting of the number of nums ends here*/


		/*storing only the primes of num[] into the another array*/

		int prime[total + 1];

		for ( i =  1, j = 1; i <= range ; i++)
		{
			if ( nums[i] == 1 )
			{
				prime[j] = i;
				j++;
			}
		}


		/*for the out put*/
		printf("%d %d:", range , c);

		if( ceil( total / 2 ) < c )
		{
			for( i = 1 ; i <= total ; i++)
			{
				printf(" %d", prime[i]);
			}
		}

		else if( total % 2 == 0 )
		{

			for( i = ceil(total / 2.0) - ( c - 1) ; i <= ceil(total / 2.0) + ( c ) ; i++)

				printf(" %d", prime[i]);
		}
		else
		{
			for( i = ceil(total / 2.0) - ( c - 1) ; i <= ceil(total / 2.0) + ( c - 1) ; i++)

				printf(" %d", prime[i]);
		}
		printf("\n\n");
	}

	return 0;
}
