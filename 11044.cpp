#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int test;
    scanf("%d", &test);
    int i, j;


    while(test--)
    {
        scanf("%d %d", &i, &j);

        i -= 2;
        j -= 2;

        int re;

        re = (i/3 + ( i%3 ? 1 : 0 ) ) * ( j/3 + (j%3 ? 1 : 0 ) );

        printf("%d\n", re  );
    }
    return 0;
}
