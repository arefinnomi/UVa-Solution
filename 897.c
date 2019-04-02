#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>


#define nwl puts("");



int main()
{
    freopen("in.txt", "r", stdin) ;
	int i, num;
	for(i = 0; i < 1000; i++) {scanf("%d", &num); printf("%d\n", num);}
    return 0;
}
