#include <stdio.h>

unsigned pow( int p)
{
	unsigned re = 1;

	while(p--)
	{
		re *= 2;
	}
	return re;
}

int main()
{
	unsigned num1, num2;

	while(scanf("%u %u", &num1, &num2) != EOF)
	{
		unsigned sum = 0;

		int i = 0;
		char bit, bit1, bit2;/*sum of bits, bits of 1st num, bits of 2nd num*/
		while(num1 || num2)
		{
			bit1 = num1 % 2;
			num1 /= 2;

			bit2 = num2 % 2;
			num2 /= 2;

			if( (bit1 == 0 && bit2 == 0) || (bit1 == 1 && bit2 == 1)) bit = 0;
			else bit = 1;

			sum += bit * pow(i);
			i++;

		}

		printf("%u\n", sum);
	}
	return 0;
}
