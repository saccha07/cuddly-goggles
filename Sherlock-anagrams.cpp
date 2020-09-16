//sherlock-and-anagrams.cpp
//Sherlock and Anagrams
//Author: Sachindra

#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

map<string, int> strmap;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		strmap.clear();
		string str;
		cin >> str;
		int len = (int)str.size();
		for (int i = 0; i < len; i++)
		{
			for (int l = 1; i + l - 1 < len; l++)
			{
				string t = str.substr(i, l);
				sort(t.begin(), t.end());
				strmap[t]++;
			}
		}
		long long ans = 0;
		for (map<string, int>::iterator it = strmap.begin(); it != strmap.end(); ++it)
			ans += (long long)(it->second) * (it->second - 1) / 2;
		cout << ans << endl;
	}
	return 0;
}
