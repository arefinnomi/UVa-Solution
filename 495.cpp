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



struct big_int
{
    string str;

    big_int()
    {
        str = "";
    }

    big_int (string temp)
    {
        str = temp;
    }

    big_int operator + (const big_int &p) const
    {
        string opr1 = str;
        string opr2 = p.str;
        reverse(opr1.begin(), opr1.end());
        reverse(opr2.begin(), opr2.end());

        string temp = "";

        int carry = 0;
        int sum = 0;

        for(int i = 0; i < opr1.size() || i < opr2.size(); i++)
        {
            sum = carry;
            if( i < opr1.size() ) sum += opr1[i]-'0';
            if( i < opr2.size() ) sum += opr2[i]-'0';

            carry = sum / 10;

            temp += (sum % 10) + '0';
        }
        if(carry) temp += carry+'0';
        reverse(temp.begin(), temp.end());

        while(temp[0] == '0') temp.erase(temp.begin());
        return big_int ( temp);
    }

};

big_int store[5050];
bool flag[5050];


big_int fib(int i)
{
    if(flag[i] == 1) return store[i];

    flag[i] = 1;

    if(i==0) store[i] = big_int("0");
    else if(i==1) store[i] = big_int("1");
    else store[i] = fib(i-1) + fib(i-2);


    return store[i];
}

int main()
{

	int n;

	while(scanf("%d", &n) != EOF)
	{
		cout<<"The Fibonacci number for "<<n<<" is "<<fib(n).str<<endl;
	}
//	main();
    return 0;
}
