#include <stdio.h>
int main()
{
	int a;
	while (scanf("%d", &a)!=EOF)
	{
		if(a>=1&&a<=100)
		{
			int total=0;

			int n=a;
			while(n>2)
			{
				int r=n%3;
				int d=n/3;

				total=total+d;
				n=d+r;
			}
			if (n==2)
			{
				total=total+1;
			}
			printf("%d", total);
		}
		else break;
		printf("\n");
	}
	return 0;
}
