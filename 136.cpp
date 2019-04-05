#include<iostream>
#include <set>

using namespace std;

int main()
{
	set <long long int> ugly;

	ugly.insert(1);

	set<long long int> ::iterator it;

	int n;
	for( it = ugly.begin(), n = 0;n <= 2500; it++,n++)
	{
		ugly.insert(2 * (*it));
		ugly.insert(3 * (*it));
		ugly.insert(5 * (*it));
	}

	for(it=ugly.begin(), n = 1; n< 1500; it++,n++)
	{
	}

	cout<<"The 1500'th ugly number is "<<(*it)<<endl;
	return 0;
}
