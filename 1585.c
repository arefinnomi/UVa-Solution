#include <stdio.h>

int main()
{
	int test;
	char ch;

	scanf("%d ", &test);


	while(test--)
	{
		int re, cu; /* the total, the current ans after wrong ans*/

		re = cu = 0;

		while(1)
		{

			scanf("%c", &ch);

			if( ch == 10)
			{
				printf("%d\n", re);
				break;
			}

			if( ch == 'O')
			{
				cu++;
				re += cu;
			}
			if(ch == 'X') cu = 0;
		}
	}

	return 0;
}
