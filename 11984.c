#include <stdio.h>

int main()
{
    int t, l_t;
    scanf("%d", &t); l_t = t;
    do
    {
        float init, inc, total;
        scanf("%f %f", &init, &inc);


        inc = (inc ) * 5 / 9;

        total = init + inc;
        printf("Case %d: %0.2f\n", t - l_t + 1, total);
    }
    while ( --l_t);
    return 0;
}
