#include <stdio.h>
#include <math.h>


int prime(int i)
{

	int divid;


	int d = sqrt(i);


	if ( i == 2 ) return 1;


	else if( i % 2 == 0) return 0;


	else
	{
		for(divid = 3; divid <= d ; divid += 2)
		{
			if ( i % divid == 0 )
			{
				break;
			}
		}

		if( divid >  d )
		{
			return 1;
		}
		else return 0 ;
	}
}

int main()
{
	int n;
	while(scanf("%d", &n)!=EOF)
	{
		int  num_factor = 0;

		if(n!=0)
		{
			if( prime(n)==1 ) num_factor=1;
			else
			{
				int divi, limit = n / 2;

				if ( n % 2 == 0 ) num_factor++;

				for( divi = 3 ; divi <= limit ; divi += 2)
				{
					if(prime(divi)==1)
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
