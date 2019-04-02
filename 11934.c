#include <stdio.h>

int main()
{
    int a, b, c, d, l;

    while(1)
    {
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &l);

        if( a == 0 && b == 0 && c == 0 && d == 0 && l == 0) break;


        int i, count = 0;

        for( i = 0; i <= l; i++)
            if( ( a * i * i + b * i + c) % d == 0) count++;

        printf("%d\n", count);
    }

    return 0;
}
