#include <stdio.h>


int main()
{
	long long int n;

	while( 1 )
	{
		scanf("%lld", &n);

		if ( n < 0) break;

		long long int ans = ( n * ( n + 1 ) / 2) + 1;/*WA for data type */

		printf("%lld\n", ans);
	 }

	return 0;
}
