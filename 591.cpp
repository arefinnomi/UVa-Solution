#include<cstdio>


using namespace std;

int abs(int re)
{
    if(re < 0) return -re;
    else return re;
}

long long int abs(long long int re)
{
    if(re < 0) return -re;
    else return re;
}


int main()
{
    int test = 1;
    int siz;
    while(true)
    {
        scanf("%d", &siz);

        if(siz==0) break;
        int ary[siz];
        int avg = 0;

        for( int i = 0; i < siz; i++)
        {
            scanf("%d", &ary[i]);
            avg += ary[i];
        }

        avg /= siz;

        int mov = 0;

        for(int i = 0; i < siz; i++)
        {
           mov += abs( ary[i] - avg);
        }

        if(test != 1) puts("");
        printf("Set #%d\nThe minimum number of moves is %d.\n", test++, mov/2);

    }
    return 0;
}
