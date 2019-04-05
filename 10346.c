#include <stdio.h>

int main()
{
	int new_am;/*the total amount of cigarette in query*/
	int divid; /*the amount of cigarette that makes a new one*/

	while( scanf("%d %d", &new_am, &divid) != EOF)
	{
		int res = 0;/*the result*/
		int qu;
		int re;

		while(new_am)
		{
			qu = new_am / divid;
			re = new_am % divid;


			if( new_am >= divid )
				res += divid * qu;
			else
			{
				res += new_am;
				break;
			}


			new_am = qu + re;
		}
		printf("%d\n", res);
	}
	return 0;
}
