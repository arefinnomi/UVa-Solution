#include <stdio.h>
int cycle(int a)/* function for calculating cycle langth of a number*/
{
	int count_cy=0;
	while(1==1)
	{
		count_cy++;
		if(a==1)
		{
			break;
		}
		else if(a%2==0)
		{
			a=a/2;
		}
		else a=3*a+1;
	}
	return count_cy;
}

int main()
{
	int i, j;
	while(scanf("%d %d", &i, &j)!=EOF)/* test case*/
	{
		int a=i, b=j,temp, max_cy=0;
		if (b<a)
		{
			int sw=b;/*swap*/
			b=a;
			a=sw;
		}
		for( ; a<=b; a++)
		{
			temp=cycle(a);
			if (max_cy<temp)
				max_cy=temp;
		}
		printf("%d %d %d\n", i, j,max_cy);
	}
	return 0;

}
