#include <cstdio>
#include <iostream>

using namespace std;

struct roman
{
    int i, v, x, l, c;

    roman()
    {
        i = 0;
        v = 0;
        x = 0;
        l = 0;
        c = 0;
    }

    roman( int ii, int vv, int xx, int ll, int cc)
    {
        i = ii;
        v = vv;
        x = xx;
        l = ll;
        c = cc;
    }

    roman operator + (const roman &p) const/*operator over-loading*/
    {
        roman res;
        res=roman(i+p.i, v+p.v, x+p.x, l+p.l, c+p.c);
        return res;
    }

    void show()
    {
        printf("%d i, %d v, %d x, %d l, %d c\n", i, v, x, l, c);
    }
};

int main()
{
    roman num[101];

    num[1] = roman(1, 0, 0, 0, 0);
    num[2] = roman(2, 0, 0, 0, 0);
    num[3] = roman(3, 0, 0, 0, 0);
    num[4] = roman(1, 1, 0, 0, 0);
    num[5] = roman(0, 1, 0, 0, 0);
    num[6] = roman(1, 1, 0, 0, 0);
    num[7] = roman(2, 1, 0, 0, 0);
    num[8] = roman(3, 1, 0, 0, 0);
    num[9] = roman(1, 0, 1, 0, 0);
    num[10] = roman(0, 0, 1, 0, 0);
    num[20] = roman(0, 0, 2, 0, 0);
    num[30] = roman(0, 0, 3, 0, 0);
    num[40] = roman(0, 0, 1, 1, 0);
    num[50] = roman(0, 0, 0, 1, 0);
    num[60] = roman(0, 0, 1, 1, 0);
    num[70] = roman(0, 0, 2, 1, 0);
    num[80] = roman(0, 0, 3, 1, 0);
    num[90] = roman(0, 0, 1, 0, 1);
    num[100] = roman(0, 0, 0, 0, 1);



    for(int i = 11; i < 100; i++)
    {
        if( i % 10 )
        {
            int last = i % 10;/*if i == 25 then last = 5*/
            int first = i - last; /*if i == 25 then first = 20*/

            num[i] = num[last] + num[first];
        }
    }

    for( int i = 2; i < 101; i++)
    {
        num[i] = num[i] + num[i-1];
    }

    int limit;
    while(true)
    {
        scanf("%d", &limit);

        if( limit == 0) break;


        printf("%d: ", limit);


        num[limit].show();
    }
    return 0;
}
