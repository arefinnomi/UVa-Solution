#include <stdio.h>


int main()
{
	unsigned long long n1, n2;

	while(scanf("%llu %llu", &n1, &n2) != EOF)
	{
		unsigned long long differ;

		switch (n1 < n2)

		{
		case !0 :
			differ = n2 - n1;
			break ;

		default :
			differ = n1 - n2 ;
			break;
		}

		printf("%llu\n", differ);
	}
	return 0;
}
