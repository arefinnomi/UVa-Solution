#include <stdio.h>

int main()
{
	long long n , profit;

	while(1)
	{
		scanf("%lld", &n);

		if( n < 0) break;

		profit = n * 25;

		printf("%lld%%\n", profit);
	}
	return 0;
}
