#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int hour, min;

	while(1)
	{
		scanf("%d:%d", &hour, &min);

		if( hour == 0 && min == 0) break;

		/*
		let,
		1 hour = 60
		1 min = 12
		*/

		hour = hour * 60 + min;
		min *= 12;

		int differ = abs(hour - min);

		float angle = differ / 2.0;

		if( angle > 180 ) angle = 360 - angle;

		printf("%0.3f\n", angle);
	}

	return 0;
}
