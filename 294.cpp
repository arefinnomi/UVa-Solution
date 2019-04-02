#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;



pair<int,int> max_di( int low , int high )
{
    int ma = 0;
    int max_amu = 0;


    for( int i = low; i <= high; i++)
    {
        int temp;
        if(i == 1 )
        {
            temp = 1;
        }

        else{
        int limit = sqrt( i);
        temp = 2;


        for(int j = 2; j <= limit; j++)
        {
//            printf("%d\n", j);
            if( i%j == 0 )
            {
//                    printf(" y\n");
                temp += 2;
                if( j*j == i) temp--;
            }
        }

//        printf("%d %d\n", i, temp);
        }

        if(max_amu < temp )
        {
            max_amu = temp;
            ma = i;

        }


    }

    return make_pair( ma, max_amu);
}


int main()
{
    int test;
    scanf("%d", &test);
    int i, j;
    while(test--)
    {
        scanf("%d %d", &i, &j);
        pair <int, int> result;

        result = max_di(i , j);
        printf("Between %d and %d, %d has a maximum of %d divisors.\n", i, j, result.first, result.second);

    }

    return 0;
}
