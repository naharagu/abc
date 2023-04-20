#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n;
	cin >> n;

	string s;
	cin >> s;

	bool is_good = false;
	bool is_bad = false;

	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == 'o')
		{
			is_good = true;
		}
		else if (s[i] == 'x')
		{
			is_bad = true;
		}
	}
	if (is_good && !is_bad)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}