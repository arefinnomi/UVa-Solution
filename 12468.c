#include <stdio.h>


int main()
{
	while(1)
	{
		short ch1, ch2;


		scanf("%hd %hd", &ch1, &ch2);

		if( ch1 == -1 && ch2 == -1) break;

		if( ch1 > ch2 )/*for ensuring that for each case ch1 < ch2*/
		{
			short temp = ch1;
			ch1 = ch2;
			ch2 = temp;
		}


		short d1 = 100 + ch1 - ch2;
		short d2 = ch2 - ch1;



		if (d1 <= d2 ) printf("%hd\n", d1);
		else printf("%hd\n", d2);

	}


	return 0;
}
