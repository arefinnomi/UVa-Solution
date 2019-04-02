#include <stdio.h>


int main()
{
    int test, l_t;
    scanf("%d", &test);
    l_t = 1;
    do
    {
        int n; /*for player number*/
        scanf("%d", &n);
        int play[n];
        int i;
        for (i = 0; i < n; i++)
        {

            scanf("%d", &play[i]);
        }
        int mid = n / 2;

        printf("Case %d: %d\n",l_t, play[mid]);
    }
    while(l_t++ < test);
    return 0;
}
