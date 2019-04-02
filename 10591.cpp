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
long long num;

bool sub_flag[1000000000];

bool happy_fun( long long s)
{
//	cout<<s<<endl;

    long long sqrt = 0;

    bool happy;

    while(s)
    {
        sqrt += (s % 10) * (s % 10);

        s /= 10;
    }

    if(sqrt == num || sub_flag[sqrt]) return false;
    else if(sqrt == 1 ) return true;
    else
    {

        	sub_flag[sqrt] = 1;
            happy = happy_fun(sqrt);
            sub_flag[sqrt] = 0;
            return happy;

    }
}

int main()
{
//    freopen("out.txt", "w", stdout);
    long long test, Case, num;
    cin>>test;
    Case = 0;

    while(Case++ < test)
    {
		cin>>num;
        printf("Case #%lld: ", Case);


        if( happy_fun(num)) printf("%lld is a Happy number.\n", num);
        else  printf("%lld is an Unhappy number.\n", num);

    }
//	main();
    return 0;
}
