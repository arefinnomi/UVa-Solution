#include <stdio.h>

long long sq;

void ackermann(long long num)
{
	sq++;

	if( num == 1 ) return;
	else if( num % 2 == 0 )
	{
		num /= 2;
		ackermann(num);
		return;
	}
	else
	{
		num = num * 3 + 1;
		ackermann(num);
		return;
	}
}

int main()
{
	long long num1, num2;

	while(1)
	{
		scanf("%lld %lld", &num1, &num2);

		if( num1 || num2)
		{
			long long max_n, max_sq = 0, temp;

			if( num1 > num2)
			{
				long long temp = num1;
				num1 = num2;
				num2 = temp;
			}
			for(temp = num1 ; temp <= num2; temp++)
			{
				sq = -1;

				ackermann(temp);

				if( temp == 1)
				{
					sq = 3;
				}

				if( sq > max_sq)
				{
					max_n = temp;
					max_sq = sq;
				}
			}

			printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", num1, num2, max_n, max_sq);
		}

		else break;
	}
	return 0;
}
