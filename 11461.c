#include <stdio.h>
#include <math.h>

int main()
{
	while(1)
	{
		int up , low;
		scanf("%d %d", &low, &up);

		if( low == 0) break;


		float up_, low_;

		up_ = floor(sqrt(up));
		low_ = ceil(sqrt(low));

		short amount = up_ - low_ + 1;

		printf("%d\n", amount);
	}
	return 0;
}
