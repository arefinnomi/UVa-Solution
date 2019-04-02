#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*for test case*/
    char test, l_c = 1;

    scanf("%d", &test);

    for(l_c = 1; l_c <= test; l_c++)
    {

        int n;/*size of array*/
        scanf("%d", &n);


        int  num[n], i;/*array*/
        for(i=0; i < n; i++) scanf("%d", &num[i]);


        printf("Case %d: ", l_c);





        char up = 0, down = 0;

        if ( n > 1) for( i = 1; i < n; i++)
            {
                if( num[i-1] < num[i]) up++;
                else if ( num[i-1] > num[i]) down++;
            }



        printf("%d %d\n", up, down);

    }

    return 0;
}
