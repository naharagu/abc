#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	string s;
	cin >> s;

	if (s.length() <= 1)
	{
		cout << "No" << endl;
		return 0;
	}
	for (int i = 1; i < s.length(); i++)
	{
		if (s[i - 1] == 'A' && s[i] == 'C')
		{
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}