#include <stdio.h>

int f91(int n)
{
	int a;
	if (n>=101)
	{
		a=n-10;
	}
	else
	{
		a=f91(f91(n+11));
	}
	return a;
}

int main()
{
	int n;
	while (scanf("%d", &n)!=EOF)
	{
		if (n>0)
		{
			int re=f91(n);
			printf("f91(%d) = %d", n, re);
		}
		else break;
		printf("\n");
	}
	return 0;
}
