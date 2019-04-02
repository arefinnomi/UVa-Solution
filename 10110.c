#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    long long num;

    while(1)
    {
        scanf("%lld", &num);
        if(num==0) break;


        long long limit = sqrt(num);


        if( limit * limit == num)  puts("yes");
        else puts("no");
    }
    return 0;
}
