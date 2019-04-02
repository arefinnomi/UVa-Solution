#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>

#define nwl puts("");


using namespace std;

char input[10000];

int period(char *str)
{
    int i = 0;
    int len = strlen(str);

    for( i = 0; i < len; i++)
    {
        int j;
        for( j = i+1; j < len; j += i +1 )
        {
            int x = 0;
            for(int k = j; k <= j + i; x++,k++)
            {
//                cout<<i spc<<j spc<<k spc<<x;
                if(str[k] != str[x] ) break;
            }
            if( x != i+1) break;
        }
        if(j==len) return i+1 ;
    }

    return len;
}

int main()
{

    int test, kase=1;
    scanf("%d",&test);
    getchar();
    while (test--)
    {
        gets(input);
        gets(input);
        if (kase++>1) printf("\n");
        printf("%d\n",period(input));

    }
    return 0;
}
