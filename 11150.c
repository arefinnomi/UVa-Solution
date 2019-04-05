#include <stdio.h>



int main()
{
	int a;
	while (scanf("%d", &a)!=EOF)
	{
		if(a>=1&&a<=200)
		{
			int total=0;

			int n=a;
			while(n>2)
			{
				int r=n%3; /* number of empty bottle */
				int d=n/3; /* the full bottle will be gotten*/

				total=total+d;
				n=d+r;
			}
			if (n==2)
			{
				total=total+1;
			}
			printf("%d", total + a);
		}
		else break;
		printf("\n");
	}
	return 0;
}
