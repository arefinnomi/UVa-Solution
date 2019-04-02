#include <stdio.h>


int main()
{
    int a , b, c, test;

    scanf("%d", &test);

    while(test--)
    {


        scanf("%d %d %d", &a, &b, &c);

        int now_b = a + b;/*total empty bottle*/
        int full = 0;

        while( now_b >= c)
        {
            full += now_b / c;
            now_b = now_b / c + now_b % c;
        }
        printf("%d\n", full);
    }
    return 0;
}
