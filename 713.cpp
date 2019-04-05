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
	int Case;
	cin>>Case;
	getchar();

	big_int num1, num2, sum;
	while(Case--)
	{
		cin>>num1.str;
		getchar();
		cin>>num2.str;
		getchar();

		reverse(num1.str.begin(), num1.str.end());
		while(num1.str[0] == '0') num1.str.erase(num1.str.begin());

		reverse(num2.str.begin(), num2.str.end());
		while(num2.str[0] == '0') num2.str.erase(num2.str.begin());

		sum = num1 + num2;

		reverse(sum.str.begin(), sum.str.end());
		while(sum.str[0] == '0') sum.str.erase(sum.str.begin());

		cout<<sum.str<<endl;
	}

//	main();
	return 0;
}
