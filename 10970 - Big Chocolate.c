#include <stdio.h>

int main()
{
	int m, n;

	while(scanf("%d %d", &m, &n) != EOF)
	{
		int result = m * n - 1;

		printf("%d\n", result);
	}
	return 0;
}
