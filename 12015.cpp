#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
	static int test, t;

	scanf("%d", &test);

	getchar();

	t = test;

	while(t--)
	{

		char url[10][120] = {0};
		int value[10] = {0};

		for(int i = 0; i < 10; i++)
		{
			scanf("%s %d", url[i], &value[i]);
			getchar();
		}
		int maxima = 0;

		for(int i = 0; i < 10; i++)
		{


			if( value[i] > maxima)
			{
				maxima = value[i];
			}
		}

		printf("Case #%d:\n", test-t);

		for(int i = 0; i < 10; i++)
		{
			if( value[i] == maxima)
			{
				puts(url[i]);
			}
		}


	}
	return 0;
}
