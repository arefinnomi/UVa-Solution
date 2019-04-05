#include <stdio.h>
#include <stdlib.h>

int main()
{
	int road, dig;

	int test = 1;

	while(1)
	{
		scanf("%d %d", &road, &dig);


		if(road || dig)
		{

			printf("Case %d: ", test++);

			road -= dig;

			if( road <= 0 ) printf("0");
			else
			{
				char i;
				for( i = 1; i < 27; i++)
				{
					if( i * dig >= road )
					{
						break;
					}
				}

				if( i == 27 ) printf("impossible");
				else printf("%d", i);
			}
			printf("\n");
		}
		else break;

	}
	return 0;
}
