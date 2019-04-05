#include <stdio.h>

int main()
{
	while(1)
	{
		int queries;
		scanf("%d", &queries);

		if (queries == 0) break;
		else
		{
			int x_o, y_o;/*coordinate of origin*/
			scanf("%d %d", &x_o, &y_o);
			while (queries--)
			{

				int x_a, y_a;/*coordinate of given point*/
				scanf("%d %d", &x_a, &y_a);


				/*after translating the origin to (0,0)*/
				x_a = x_a - x_o;
				y_a = y_a - y_o;


				if( x_a == 0 || y_a == 0) printf("%s", "divisa");
				else if( x_a > 0 && y_a > 0 ) printf("%s", "NE");
				else if( x_a < 0 && y_a > 0 ) printf("%s", "NO");
				else if( x_a < 0 && y_a < 0 ) printf("%s", "SO");
				else if( x_a > 0 && y_a < 0 ) printf("%s", "SE");


				printf("%c", '\n');

			}
		}
	}
	return 0;
}
