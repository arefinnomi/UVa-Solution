#include <stdio.h>


char prime[1000000 + 1];



void sieve(void)
{


	long int i, j;

	for( i = 2 ; i <= 1000000 ; i++) prime[i] = 1;/*let all array index be prime*/


	for( i = 2 ; i <= 1000000 ; i++) /* finding for array index whether it is prime or not*/
	{
		if( prime[i] == 1 )

			for( j = i + i ; j <= 1000000 ; j += i) prime[j] = 0 ;
	}
}


int main()
{

	sieve();

	long int n;

	while(scanf("%ld", &n)!=EOF)
	{

		int  num_factor = 0;

		if(n!=0)
		{
			if( prime[n] == 1 ) num_factor=1;
			else
			{
				long int divi, limit = n / 2 ;

				if ( n % 2 == 0 ) num_factor++;

				for( divi = 3 ; divi <= limit ; divi += 2)
				{
					if(prime[divi] == 1)
					{
						if(n%divi==0)
						{
							num_factor++;
						}
						else continue;
					}
					else continue;
				}
			}

		}
		else break;
		printf("%d : %d\n", n, num_factor);
	}
	return 0;
}
