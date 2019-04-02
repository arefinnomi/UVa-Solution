#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int test, t;
    scanf("%d", &test);

    getchar();

    t = test;

    while(t--)
    {


        long long int side[3];

        scanf("%lld %lld %lld", &side[0], &side[1], &side[2]);


        bool flag = false;


        for( int i = 0; i < 3; i++)
        {
            if( side[i % 3] + side[ (i +1) % 3] > side[(i+2) % 3] ) flag = true;
            else
            {
                flag = false;
                break;
            }
        }
        printf("Case %d: ", test-t);
        if(flag )
        {
            if( side[0] == side[1] && side[2] == side[1]) puts("Equilateral");

            else if( side[0] == side[1] || side[2] == side[1]  || side[2] == side[0]) puts("Isosceles");
            else puts("Scalene");
        }
        else puts("Invalid");
    }

    return 0;
}
