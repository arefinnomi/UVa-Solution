#include <stdio.h>


char binary[30];

void reverse( int in, int ter)
{
	if ( in >= ter ) return;
	else
	{
		char temp;
		temp = binary[in];
		binary[in] = binary[ter];
		binary[ter] = temp;


		reverse(in+1, ter-1);
	}
}


int main()
{
	while(1)
	{
		int num;

		scanf("%d", &num);

		if( num == 0 ) break;

		int i = 0, count_one = 0;
		while( num )
		{
			binary[i] = num % 2 + '0';

			if( binary[i] == '1' )  count_one++;

			num /= 2;

			i++;
		}

		binary[i] = 0;

		reverse(0, i-1);

		printf("The parity of %s is %d (mod 2).\n", binary, count_one);
	}



	return 0;
}
