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

struct triple
{
    int a, b, c;

    triple()
    {
        a = 0;
        b = 0;
        c = 0;
    }
    triple(int i, int j, int k)
    {
        a = i;
        b = j;
        c = k;
    }
};

vector < pair <int , triple> > store;

void my_sort( void)
{
    for(int i = 0; i < store.size(); i++)
    {
        for(int j = i + 1; j < store.size(); j++)
        {
            if( store[i].first > store[j].first)
            {
                swap( store[i].first, store[j].first);
                swap( store[i].second, store[j].second);
            }

			if( store[i].first == store[j].first)
            {
            	if(store[i].second.a > store[j].second.a)
                swap( store[i].first, store[j].first);
                swap( store[i].second, store[j].second);
            }
        }
    }

    for(int i = 0; i < store.size(); i++)
    {
        for(int j = i + 1; j < store.size(); j++)
        {

			if( store[i].first == store[j].first)
            {
            	if(store[i].second.a > store[j].second.a)
                swap( store[i].first, store[j].first);
                swap( store[i].second, store[j].second);
            }
        }
    }
}

int main()
{

//	freopen("o.txt", "w", stdout);
    int a, b, c, d;

    a = 0;

    for( b = 2; b  <= 200; b++)
    {
        for( c = b + 1; c <= 200; c++)
        {
            for( d = c + 1; d <= 200; d++)
            {
                a = ceil(pow( b*b*b + c*c*c + d*d*d, 1/3.0));

                if( a > 200) break;

//				cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<endl;

                if( a*a*a == b*b*b + c*c*c + d*d*d)
                {
                    store.push_back(make_pair( a, triple(b, c, d)));
                }
            }
        }
    }

	my_sort();
    for( int i = 0; i < store.size(); i++) cout<<"Cube = "<<store[i].first<<", Triple = ("<<store[i].second.a<<","<<store[i].second.b<<","<<store[i].second.c<<")"<<endl;
//	main();
    return 0;
}
