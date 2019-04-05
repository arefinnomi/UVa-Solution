#include <stdio.h>

int main()
{
	int test;

	scanf("%d", &test);

	while(test--)
	{
		int n;/*number of farmers*/

		scanf("%d", &n);

		long long int farm[n];/*size of farmyard*/
		int ani[n];/*animal*/
		int equ[n];/*equipment*/

		int i;/*loop control variable*/
		for( i = 0; i < n; i++) scanf("%lld %d %d", &farm[i], &ani[i], &equ[i]);

		long long int result = 0;

		for( i = 0; i < n; i++) result += farm[i] * equ[i];


		printf("%lld\n", result);
		/*if( test) printf("\n");*/
	}

	return 0;
}
