#include <stdio.h>


int main()
{
    while (1)
    {
        char n;/*column & row of square*/

        scanf("%d", &n);

        if ( n == 0) break;

        int count = 0;

        for ( ; n ; n--)
        {

            count = count + n * n;
        }


        printf("%d\n", count);

    }

    return 0;
}
