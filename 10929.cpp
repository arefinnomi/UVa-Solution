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


int main()
{
//	freopen("out.txt", "w", stdout);
//	freopen("in.txt", "r", stdin);

	string str;
	string str1;

	while(1)
	{
		cin>>str;
		str1 = str;

//		cout<<"aaaaaaaaaaa"<<endl;

		if(str=="0") break;
//		cout<<"aaaaaaaaaaa"<<endl;

		long long num;

		while(str.size() > 2 && str != "10" )
		{
			num = (str[0] - '0') * 100 + (str[1] - '0') * 10 + str[2]-'0';
			num %= 11;

			str.erase(str.begin());
			if(num == 10 ) str[0] = '1',str[1] ='0';
			else if(num) str[1] = num + '0';


			if(num!=10 && num != 0)

				str.erase(str.begin());
			else if( num == 0)
			{
				str.erase(str.begin());
				if(str.size())str.erase(str.begin());
			}

//			cout<<str<<endl;

		}

		num = 0;
		for(int i = 0; i < str.size(); i++) num = num *10 + str[i] -'0';

		num %= 11;

		if( !num ) cout<<str1<<" is a multiple of 11."<<endl;
		else cout<<str1<<" is not a multiple of 11."<<endl;

	}

//	main();
	return 0;
}
