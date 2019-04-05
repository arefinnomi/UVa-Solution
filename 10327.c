#include <stdio.h>

int main()
{
	int n;

	while( scanf("%d", &n) != EOF)
	{
		int array[n];

		int i = n, j;
		while(i)
		{
			scanf("%d", &array[n-i]);
			i--;
		}

		int count = 0, mini = 0, temp;

		for( i = 0; i < n; i++)
		{
			mini = i;

			for( j = i + 1; j < n; j++)
			{
				if( array[j] < array[mini] ) mini = j;
			}

			for( ; mini > i; mini--)
			{
				temp = array[mini];
				array[mini] = array[mini - 1];
				array[mini - 1 ] = temp;

				count++;
			}
		}

		printf("Minimum exchange operations : %d\n", count);
	}
	return 0;
}
