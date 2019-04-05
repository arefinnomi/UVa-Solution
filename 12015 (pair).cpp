#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>

using namespace std;

int main()
{

	int test, t;
	scanf("%d", &test);

	getchar();

	t = test;

	while(t--)
	{
		pair< int , string > url[10];

		char str[120];
		int  value, maxima = 0;


		for(int i = 0; i < 10; i++)
		{
			scanf("%s %d", str, &value);
			url[i].first = value;

			url[i].second = string(str);


			if( value > maxima) maxima = value;

		}
		printf("Case #%d:\n", test-t);

		for(int i = 0; i < 10; i++)
		{

			if(url[i].first == maxima)cout<<url[i].second<<endl;
		}
	}

	return 0;
}
