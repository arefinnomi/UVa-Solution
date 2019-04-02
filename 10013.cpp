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
int main()
{

//	freopen("out.txt", "w", stdout);
    int test;
    scanf("%d", &test);


    while(test--)
    {

        big_int num;
        big_int num1;
        big_int num2;

        int siz;

        scanf("%d", &siz);
        int ch1, ch2;
        while(siz--)
        {
            scanf("%d %d", &ch1, &ch2);

            num1.str += ch1+'0';
            num2.str += ch2+'0';
        }

        cout<<(num1+num2).str;
        if(test) printf("\n\n");
        else printf("\n");
    }
//	main();
    return 0;
}
