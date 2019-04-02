#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>

#define nwl puts("");


using namespace std;


long double com( int n, int r)
{
    int k =  n - r;

    long double re = 1;

    int i, j;/*loop control variable */

    if( k > r)/*for keeping always the value of r greater then k*/
    {
        int temp = k;
        k = r;
        r = temp;
    }


    for( i = r + 1, j = 2 ; i <= n || j <=  k ;)
    {
        if(i <= n )
        {
            re = re * i;
            i++;
        }

        if ( j <=  k )
        {
            re = re / j;
            j++;
        }
    }
    return re;
}



int main()
{



    while(1)
    {

        int n, r;

        scanf("%d %d", &n, &r);

        if( n == 0 && r == 0) break;

        printf("%d things taken %d at a time is %0.0Lf exactly.\n", n, r, com( n, r));
    }

    return 0;
}
