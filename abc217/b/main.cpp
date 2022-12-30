#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	vector<string> s(4);

	s = {"ABC", "ARC", "AGC", "AHC"};

	for (int j = 0; j < 3; j++)
	{
		string t;
		cin >> t;
		for (int i = 0; i < 4; i++)
		{
			if (s[i] == t)
				s[i] = "0";
		}
	}

	for (int i = 0; i < 4; i++)
	{
		if (s[i] != "0")
			cout << s[i] << endl;
	}
}