#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0;
	std::vector<char> vt;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		vt.push_back(s[i]);
	}
	sort(s.begin(), s.end());

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != vt[i])
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'a')
		{
			a++;
		}
		if (s[i] == 'b')
		{
			b++;
		}
		if (s[i] == 'c')
		{
			c++;
		}
	}
	if ((c == a || c == b) && (a > 0 && b > 0))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

}