#include <stdio.h>

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int x = ( a + b) / 2;
        int y = ( a - b) / 2;

        if( x >= 0 && y >= 0 && (x + y) == a && (x - y) == b) printf("%d %d\n", x, y);
        else printf("impossible\n");
    }
    return 0;
}
