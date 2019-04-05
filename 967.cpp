/*********************************
	SIEVE THEOREM
 **********************************/

#include <stdio.h>
#include <math.h>

using namespace std;
int pre[1000000 + 1];
bool prime[1000000 + 1] ;
void seive(void)
{


	int n = 1000000;
	int i, j, limit;

	for( i = 2 ; i <= n ; i++) prime[i] = true;/*let all array index be prime*/

	limit = sqrt(n);

	for( i = 2 ; i <= limit ; i++) /* finding for array index whether it is prime or not*/
	{
		if( prime[i] == 1 )

			for( j = i + i ; j <= n ; j += i) prime[j] = false ;
	}

	return ;
}

int powr( int p)
{
	int re;
	if(p == 0 ) re = 1;
	else
		re = 10 * powr(p-1);

	return re;
}
int cycle(int num )
{
	int len = 0, temp =num;

	while( temp)
	{
		len++;

		temp /= 10;
	}

	temp = num % 10;

	num /= 10;

	num =( powr(len-1) ) * temp + num;

	return num;
}

bool circular_prime( int num)
{
	int len = 0, temp =num;

	while( temp)
	{
		len++;

		temp /= 10;
	}

	bool re = false;
	if( prime[num] == true )
	{
		if( len == 1 ) re = true;
		else
		{
			while( len - 1 )
			{
				num = cycle(num);

				if ( prime[num] == true ) re = true;
				else
				{
					re = false;
					break;
				}

				len--;
			}
		}
	}
	return re;
}

int main()
{
	seive();

	pre[0] = 0;
	pre[1] = 0;

	for( int i = 2; i < 1000000 + 1; i++)
	{
		if( circular_prime(i) == true ) pre[i] = pre[i-1] + 1;
		else pre[i] = pre[i-1];
	}

	int in , ter;

	while(1)
	{
		scanf("%d", &in);

		if( in < 0) break;

		scanf("%d", &ter);
		int amu;

		if( circular_prime(in) == true) amu = pre[ter] + 1 - pre[in];
		else amu = pre[ter] - pre[in];

		if(amu>1)
		printf("%d Circular Primes.\n", amu);
		else if(amu == 1) printf("1 Circular Prime.\n");
		else printf("No Circular Primes.\n");
	}
	return 0;
}

