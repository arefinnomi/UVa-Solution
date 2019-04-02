#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main()
{
    int test;
    scanf("%d", &test);

    while(test--)
    {
        int n;
        scanf("%d", &n);

        int bogi[n];

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &bogi[i]);

        }

        int coun = 0;

        for( int i = 0; i < n; i++)
        {
            if ( i + 1  != bogi[i] )
            {
                int j;
                for( j = i + 1; j < n; j++) if( bogi[j] == i + 1 ) break;


                for( ; j + 1 != bogi[j]; j-- )
                {

                    swap(bogi[j], bogi[j-1]);
                    coun++;

                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", coun);
    }
    return 0;
}
