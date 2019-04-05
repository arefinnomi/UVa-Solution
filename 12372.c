#include <stdio.h>
#include <stdlib.h>

int main()
{
	char test, l_t;
	scanf("%d", &test);

	for(l_t = 1 ; l_t <= test ; l_t++)
	{
		int l, w, h; /*the length, width and height of the box*/

		scanf("%d %d %d", &l, &w, &h);



		printf("Case %d: ", l_t);


		if(l <= 20 && w <= 20 && h <= 20) printf("%s", "good");
		else printf("%s", "bad");
		printf("%c", '\n');
	}
	return 0;
}
