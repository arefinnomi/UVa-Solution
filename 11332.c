#include <stdio.h>

int main()
{
	int num ;

	while(1)
	{
		scanf("%d", &num);

		if( num < !0) break;



		int sum = num;

		while ( num > 9 )
		{
			sum = 0;
			while( num )
			{
				sum = sum + num % 10 ;
				num = num / 10;

			}

			num = sum;
		}

		printf("%d\n", sum);
	}

	return 0;
}
