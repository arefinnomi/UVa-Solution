#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
	string hide1[9] =
	{
		"OBIDAIBKR",
		"RKAULHISP",
		"SADIYANNO",
		"HEISAWHIA",
		"IRAKIBULS",
		"MFBINTRNO",
		"UTOYZIFAF",
		"LEBSYNUNE",
		"EMOTIONAL",

	};
	string hide2[9] = {""};

	for(int i = 0; i < 9; i++)
	{
		for( int j = 0; j < 9; j++)
		{
			hide2[i] += hide1[j][i];
		}
	}


	string temp;

	vector < string > archive;

	for(int l = 4; l < 8; l++)
	{
		for( int i = 0; i < 9 ; i++)
		{
			for( int j = 0; j + l <= 9; j++)
			{
				temp = "";
				temp = hide1[i].substr(j, l);

				sort(temp.begin(), temp.end());

				archive.push_back(temp);
			}

		}

		for( int i = 0; i < 9 ; i++)
		{
			for( int j = 0; j + l <= 9; j++)
			{
				temp = "";
				temp = hide2[i].substr(j, l);

				sort(temp.begin(), temp.end());
				archive.push_back(temp);
			}

		}
	}

	string name[9] =
	{
		"RAKIBUL",
		"ANINDYA",
		"MOSHIUR",
		"SHIPLU",
		"KABIR",
		"SUNNY",
		"OBAIDA",
		"WASI"
	};

	string name_temp[] =
	{
		"RAKIBUL",
		"ANINDYA",
		"MOSHIUR",
		"SHIPLU",
		"KABIR",
		"SUNNY",
		"OBAIDA",
		"WASI"
	};

	for( int i = 0; i < 9; i++) sort(name_temp[i].begin(), name_temp[i].end());

	int cont ;
	for( int i = 0; i < 9; i++)
	{
		cont = 0;
		for( int j = 0; j < archive.size(); j++)
		{
			if( name_temp[i] == archive[j]) cont++;
		}
//		cout<<cont<<endl;

		if( cont==2)
		{
			cout<<name[i]<<endl;
			break;
		}
	}




	return 0;
}
