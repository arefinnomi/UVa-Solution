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

	string str;

bool pal(int low, int high)
{
//	cout<<low<<" "<<high<<endl;
	if( low > high) return true;
	else if(str[low] != str[high] ) return false;

	else return pal(low+1, high-1);
}



int main()
{
//	freopen("in", "r", stdin);
	while(1)
	{
		getline(cin, str);

		if(str == "DONE") break;

		for(int i = 0; i < str.size(); i++)
		{
			if(isalpha(str[i]) )
				str[i] = tolower(str[i]);
			else str.erase(str.begin()+i), i--;
		}

//		cout<<str<<endl;

		if(pal(0, str.size()-1) ) printf("You won't be eaten!\n");
		else printf("Uh oh..\n");

	}
//	main();
	return 0;
}
