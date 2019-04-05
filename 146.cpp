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

string next_par(string str)
{

	for(int i = str.size() - 1 ; i > -1 ; i--)
	{
		int j;
		for(j = str.size()-1; j > i ; j--) if( str[j] > str[i] ) break;

//		cout<<i<<" "<<j<<endl;
		if( j == i ) continue;
		else
		{
			swap(str[j], str[i]);
			sort(str.begin() + i + 1, str.end());
//			cout<<str<<endl;
			break;
		}


	}

	return str;
}

int main()
{
	string str, main;
	while(1)
	{
		cin>>str;
		main = str;
		if(str == "#") break;

		str = next_par(main);



		if( main == str) cout<<"No Successor";
		else cout<<str;


		nwl;
	}

//	main();
	return 0;
}
