#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	string s;
	cin >> s;

	for (int i = 0; i < (int)s.size(); i++)
	{
		if (s[i] == '0')
			s[i] = '1';
		else
			s[i] = '0';
	}

	cout << s << endl;
}