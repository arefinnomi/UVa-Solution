#include <stdio.h>
#include <string.h>

char str[5000];

int mod(int div )
{
		int i, ln, re = 0;

		ln = strlen(str);

		for(i = 0; i < ln ; i++)
		{
			re = re * 10 + str[i] - '0';
			re %= div;
		}

	return re;
}

int main()
{
	int flag, i, leap, print = 0;
	while(gets(str))
	{
		if(print) printf("\n");

		print = 1;

		/*printf("%d %d %d %d %d\n", mod(4), mod(100), mod(400), mod(15), mod(55));*/
		flag = 0 ;
		leap = 0;

		if( mod( 4 )== 0 )
		{
			if( mod( 100 )== 0  )
			{
				if( mod(400) == 0)
				{
					leap = 1;
					flag = 1 ;
					printf("This is leap year.\n");
				}
			}
			else
			{
				leap = 1;
				flag = 1 ;
				printf("This is leap year.\n");
			}
		}

		if( mod( 15) == 0 )
		{
			flag = 1 ;
			printf("This is huluculu festival year.\n");
		}
		if( mod( 55 )== 0 )
			if(leap)
			{
				flag = 1 ;
				printf("This is bulukulu festival year.\n");
			}

		if( flag == 0 ) printf("This is an ordinary year.\n");

	}

	return 0;
}
