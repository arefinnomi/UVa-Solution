#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char str[5000];
char str_temp[5000];

void reverse(void)
{
	char temp;
	int i, limit, ln;

	ln = strlen(str_temp) - 1;

	limit = ln / 2;

	for( i = 0 ; i <= limit ; i++)
	{
		temp = str_temp[i];
		str_temp[i] = str_temp[ln-i];

		str_temp[ln-i] = temp;
	}
}

int mod( int div)
{
	int i;

	for(i=0 ; i < 5000; i++) str_temp[i] = '\0';

	strcpy(str_temp, str);

	char a[15];

	int temp, ln;

	while(1)
	{

		ln = strlen(str_temp);

		reverse();

		for(i = 0; i < 9 ; i++)
		{
			a[i] = str_temp[ln - 1 - i];
			str_temp[ln - 1 - i] = '\0';
		}
		a[i] = '\0';

		temp = atoi(a);

		temp %= div;

		ln = strlen(str_temp);

		for( i = ln ; temp; i++)
		{
			str_temp[i] = 48 + temp % 10;
			temp /= 10;
		}
		reverse();


		if (strlen(str_temp) <= 9 ) break;

	}

	return atoi(str_temp) % div;

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

		for(i=0 ; i < 5000; i++) str[i] = '\0';


	}

	return 0;
}
