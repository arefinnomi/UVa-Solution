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

typedef unsigned int UI;
typedef long long int LLI;
typedef unsigned long long int ULLI;
typedef long double LLF;
typedef double LF;

using namespace std;

struct big_int
{
	string str;

	big_int()
	{
		str = "";
	}

	big_int (string temp)/*assign from a string*/
	{
		str = temp;
	}

	big_int ( long long temp)/*assign from a long long*/
	{
		str = "";
		while( temp)
		{
			str += (temp%10)+'0';
			temp /= 10;
		}
		reverse(str.begin(), str.end());
	}
	big_int ( int temp)/*assign from a int*/
	{
		str = "";
		while( temp)
		{
			str += (temp%10)+'0';
			temp /= 10;
		}
		reverse(str.begin(), str.end());
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

	big_int operator * ( const big_int &p) const
	{
		big_int temp, result;

		result.str;


		for(int i = 0; i < p.str.size(); i++)
		{
			if(i) result.str += '0';
			int carry = 0, multi = 1;
			for(int j = str.size()-1; j >= 0; j--)
			{
				multi = ( str[j] - '0') * (p.str[i] - '0') + carry;
				temp.str += (multi%10) + '0';
				carry = multi/10;
			}
			if(carry) temp.str += carry+'0';

			reverse(temp.str.begin(), temp.str.end());

			while(temp.str[0] == '0') temp.str.erase(temp.str.begin());
			result = result + temp;
			temp.str = "";
		}

		return result;
	}
};

big_int factorial ( int num)
{
	if( num == 0) return big_int(1);

	return big_int( num) * factorial(num-1);
}


int main()
{

	int num;
	string str;
	while(1)
	{
		cin>>num;

		if(!num) break;


		str = factorial(num).str;

		int ary[10];

		for(int i = 0; i < 10; i++) ary[i] = 0;


		for(int i = 0; i < str.size(); i++)
		{
			ary[ str[i] - '0']++;
		}


		cout<<num<<"! --\n";
		for(int i = 0; i < 5; i++) printf("   (%d)%4d", i, ary[i]);
		nwl;
		for(int i = 5; i < 10; i++) printf("   (%d)%4d", i, ary[i]);
		nwl;
	}


}
